#include <iostream>
#include <string>


using namespace std;

string shortSubstring(string s) {
    string o;
    for(int i=0; i<s.size(); i++) {
        if(i==0) {
            o+=s[i];
        } else if(s[i+1]==s[i]) {
            o+=s[i];
            i++;
        } else {
            o+=s[i];
        }
    }
    return o;
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        cout << shortSubstring(s) << "\n";
    }

}