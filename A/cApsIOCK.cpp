#include <iostream>
#include <string>

using namespace std;


int main() {
    string w;
    cin >> w;

    for(int i=0; i < w.size(); i++) {
        if(i==0 && w.size()>1) {
            w[i]=toupper(w[i]);
        } else {
            w[i] = tolower(w[i]);
        }
    }
    cout << w << "\n";
}