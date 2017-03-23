#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct word_count {
    string word;
    int count;
} word_count;

int split(const string& s, const vector<char>& delim, vector<string>& tokens) {
    if (s.length() == 0) return 0;
    int i = 0;
    int actual_pos = s.length();
    for (char c: delim) {
        int tmp_pos = s.find(c);
        if (tmp_pos != string::npos && tmp_pos < actual_pos) {
            actual_pos = tmp_pos;
        }
    }

    while (actual_pos != string::npos) {
        tokens.push_back(s.substr(i, actual_pos-i));
        i = ++actual_pos;
        int new_pos = s.length();
        for (char c: delim) {
            int tmp_pos = s.find(c, actual_pos);
            if (tmp_pos != string::npos && tmp_pos < new_pos) {
                new_pos = tmp_pos;
            }
        }

        if (new_pos == s.length()) {
            actual_pos = string::npos;
        }
        else {
            actual_pos = new_pos;
        }

        if (actual_pos == string::npos) {
            tokens.push_back(s.substr(i, s.length()));
        }
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
        split(line, delim, tokens);
        for (string word: tokens) {
            cout << word << endl;
        }
    }

    exit(EXIT_SUCCESS);
}