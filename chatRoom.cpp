#include <iostream>
#include <string>

using namespace std;


int main() {
    string w;
    cin >> w;

    string h = "hello";
    int j = 0;
    for(int i=0; i < w.size(); i++) {
        w[i] = tolower(w[i]);
        if(w[i]==h[j]) {
            j++;
        }
    }
    if(j >= 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}