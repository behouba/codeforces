#include <iostream>
#include <string>

using namespace std;

int pieces(int w, int h) {
     if(w%2==0) {
       return pieces(w/2, h) + pieces(w/2, h);
    } 
    if (h%2==0) {
       return pieces(w, h/2) + pieces(w, h/2);// 1+1+1
    }
    return 1;
}

int main() {
    int t;
   cin >> t;
    // cout << pieces(10, 5)<< "\n";
    for(int i=0; i<t; i++) {
        int  w, h, n;
        cin >> w >> h >> n;
        if(pieces(w, h)>=n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}