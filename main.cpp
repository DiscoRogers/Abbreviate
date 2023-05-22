#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

unordered_map<string, int> soundDict = {
    {"ch", 1}, {"sh", 1}, {"ph", 1}, {"pl", 1},
    {"nt", 1}, {"cr", 1}, {"th", 1}, {"st", 1},
    {"ng", 1}, {"cl", 1}, {"tr", 1}, {"fr", 1},
    {"dr", 1}
};

string consonants = "bcdfghjklmnpqrstvwxyz";

bool isConsonant(char c) {
    return consonants.find(tolower(c)) != string::npos;
}

string processWord(const string& word) {
    string result = "";

    for (int i = 0; i < word.size(); ++i) {
        if (i == 0 || (result.size() < 4 && soundDict.count(word.substr(i, 2)) && i < word.size() - 1)) {
            result += word[i];
            if (soundDict.count(word.substr(i, 2))) ++i;
        } else if (result.size() < 4 && isConsonant(word[i])) {
            result += word[i];
        }

        if (result.size() == 4) break;
    }

    return result.substr(0, 4);
}

vector<string> abbreviate(vector<string>& words) {
    unordered_map<string, string> abbreviations;
    vector<string> result(words.size());

    for (int i = 0; i < words.size(); ++i) {
        string abbr = processWord(words[i]);
        result[i] = abbr;
    }

    return result;
}

int main() {
    vector<string> words = {"example", "abbreviation", "test", "strings"};
    vector<string> abbrs = abbreviate(words);

    for (const auto& abbr : abbrs) {
        cout << abbr << '\n';
    }

    return 0;
}
