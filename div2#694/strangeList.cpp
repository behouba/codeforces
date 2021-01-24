#include <iostream>
#include <vector>
using namespace std;


int single(int a, int b) {
    if(a%b==0) {
        return single(a/b, b);
    }
    return a*b;
}

int strangeList(vector<int> arr, int x) {
    int sum = 0;
    bool stop = false;
    for(int i=0; i<arr.size(); i++) {
        sum+=arr[i];
        if (arr[i]%x==0 && !stop) {
            int v = arr[i]/x;  
        }
        if(arr[i]%x!=0) {
            stop=true;
        }
    }
    return sum;
}

int main() {
   // cout << strangeList({4, 6, 8, 2}, 2) << "\n";
        cout << single(4, 2) << "\n"; // 3 3

    // int t, n, x;
    // cin >> t;

    // for(int i=0; i<t; i++) {
    //     cin >> n >> x;
    //     vector<int> a(n);
    //     for(int j=0; j<n; j++) {
    //         cin >> a[j];
    //     }
    //     cout << strangeList(a, x) << "\n";
    // }
}