#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct word_count {
    string word;
    int count;
} word_count;

int split(const string& s, vector<string>& tokens) {
    int i, j = 0;
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

    for (string line: lines) {
        vector<char> delim = {' ', ',', '.', '!', '?', '(', ')'};
        vector<string> tokens;
        split(line, tokens);
        for (string word: tokens) {
            cout << word << endl;
        }
    }

    exit(EXIT_SUCCESS);
}