#include <iostream>

using namespace std;

int main() {
    int w;
    cin >> w;
    if(w%2==0 && 2 != w) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}