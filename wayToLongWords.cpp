#include <iostream>
#include <vector>
#include <string>

using namespace std;

string reduceWord(string w) {
    int len = w.size();
    if (len <= 10) {
        return w;
    }
    
    return w[0] + to_string(len-2) + w[len-1];
}

int main() {
    int n;
    vector<string> words;

    cin >> n;
    for(int i=0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    for(int i=0; i < n; i++) {
        cout << reduceWord(words[i]) << "\n";
    }
}