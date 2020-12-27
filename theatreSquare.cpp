#include <iostream>

using namespace std;
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    if(n%a!=0) {
        n = ((n/a) * a) + a;
    }
    if(m%a!=0) {
        m = ((m/a)*a) + a;
    }
    cout << (m*n)/ (a*a) << "\n";
}