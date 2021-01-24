#include <iostream>
#include <vector>

using namespace std;
// [2, 5, 6, 7, 8]
int jumpFrom(vector<int> a) {
    if(a.size() > a[0]) {
        return a[0] + jumpFrom(vector<int>(a.begin()+a[0], a.end()));
    }
    return a[0];
}

int longJump(vector<int> a) {
    int max = 0;
    for(int i=0; i<a.size(); i++) {
        int x = jumpFrom(vector<int>(a.begin()+i, a.end()));
        if(x>max) max = x;
    }
    return max;
}


int main() {
    // cout << longJump({7, 3, 1, 2, 3}) << "\n";
    int t, n;
    cin >> t;
    for(int i=0; i<t;i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j=0; j<n; j++) {
            cin >> a[j];
        }
        cout <<  longJump(a) << "\n";    
    }
    // for(int i=0; i<arr.size(); i++) {
    //     cout <<  longJump(arr[i]) << "\n";
    // }
}


