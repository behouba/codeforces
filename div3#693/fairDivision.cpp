#include <iostream>
#include <vector>

using namespace std;


string isFair(vector<int> arr, int sum) {
    if(sum%2!=0) {
        return "NO\n";
    }
    int c = 0;
    for (int ai: arr) {
        if(c+ai <= sum/2) {
            c+=ai;
        }
        cout << c << "\n";
        if(c==sum/2) {
            return "YES\n";
        }
    }
    return "NO\n";
}

int main() {
    cout << isFair({2, 1, 1, 2, 2, 2}, 10); // 1 1 2 2 2
    // int t;
    // cin >> t;
    // for(int i=0; i<t; i++) {
    //     int n;
    //     cin >> n;
    //     vector<int> arr(n);
    //     int s = 0;
    //     for(int j=0; j<n; j++) {
    //        cin >> arr[j];
    //         s+=arr[j];
    //     }
    //     cout << isFair(arr, s);
    // }
}