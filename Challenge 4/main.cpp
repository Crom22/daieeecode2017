#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct word_count {
    string *word;
    int count;
    word_count* next;
} word_count;

int split(const string& s, vector<string>& tokens) {
    unsigned int i, j = 0;
    for (i = 0; i < s.length(); i++) {
        if (s[i] == '!' || s[i] == '(' || s[i] == ')') {
            int len = i - j;
            if (len > 0) {
                tokens.push_back(s.substr(j, i - j));
            }
            tokens.push_back(s.substr(i, 1));
            j = i + 1;
        }
        else if (s[i] == ' ') {
            tokens.push_back(s.substr(j, i - j));
            j = i + 1;
        }
    }
    int len = i - j;
    if (len > 0 ) {
        tokens.push_back(s.substr(j, i - j));
    }

    return 0;
}

int increment_or_add(struct word_count* wc, string& word) {
    bool inc = false;
    struct word_count *last_wc = wc;
    if (wc->word->compare("") == 0) {
        wc->word = &word;
        wc->count = 1;
        wc->next = NULL;
        return 0;
    }

    while (wc != NULL) {
        last_wc = wc;
        if (wc->word->compare(word) == 0) {
            inc = true;
            wc->count += 1;
        }
        wc = wc->next;
    }

    if (!inc) {
        struct word_count *new_wc = (struct word_count *) malloc(sizeof(struct word_count));
        new_wc->word = &word;
        new_wc->count = 1;
        new_wc->next = NULL;
        last_wc->next = new_wc;
    }

    return 0;
}

int main() {
    string line;
    vector<string> lines;
    ifstream myfile;
    myfile.open("data");

    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            lines.push_back(line);
        }
        myfile.close();
    }
    else {
        cout << "Failure!" << endl;
        exit(EXIT_FAILURE);
    }

    vector<string> tokens;
    for (string line: lines) {
        vector<char> delim = {' ', ',', '.', '!', '?', '(', ')'};
        split(line, tokens);
    }

    struct word_count wc;
    string null = "";
    wc.word = &null;
    wc.count = 0;
    wc.next = NULL;
    struct word_count* work;
    work = &wc;

    for (string& word: tokens) {
        increment_or_add(&wc, word);
    }

    ofstream result("result.json");
    result << "{" << endl;
    bool first = true;
    while (work != NULL) {
        if (first) {
            first = false;
        }
        else {
            result << "," << endl;
        }
        result << "\"" << *(work->word) << "\": " << work->count;
        work = work->next;
    }
    result << endl << "}";
    result.close();
    exit(EXIT_SUCCESS);
}