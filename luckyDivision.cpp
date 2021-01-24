#include <iostream>

using namespace std;

string lucyDivision(int cur, int n) {
    if(cur>0 && n%cur==0) {
        return "YES\n";
    }
    if(cur>n) {
        return "NO\n";
    }
    string r1 = lucyDivision((cur*10)+4, n);
    if (r1!="YES\n") {
        return  lucyDivision((cur*10)+7, n);
    }
    return r1;
}

int main() {
    int n;
    cin >> n;
    cout << lucyDivision(0, n);
}