#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;

    for(int i=0; i<n; i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if((p+v+t)>1) {
            count++;
        }
    }
    cout << count << "\n";
}
