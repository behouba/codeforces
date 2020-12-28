#include <iostream>
#include <string>
using namespace std;

string task(string s) {
    int len = s.size();
    int i=0; 
    while(i < s.size()) {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] ==  'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') {
            s.erase(i, 1);
        } else {
            i++;
        }
    }

    for(int i=0; i < s.size(); i+=2) {
        if(i==0) {
            s.insert(0, 1, '.');
        } else if (s[i] != '.') {
            s.insert(i, 1, '.');
        }
    }
    return s;
}

int main()
{
    string in, out;
    cin >> in;
    cout << task(in) << "\n";
}
