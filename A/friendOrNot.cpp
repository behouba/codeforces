#include <iostream>
#include <unordered_set>
#include <string>
#include <map>
#include <vector>

using namespace std;


int main() {
    map<unordered_set<string>, int> friends;
    vector<string> friendsV(0);
    int n, d;
    cin >> n >> d;
    int count = 0;

    for(int i=0; i<n; i++) {
        string a, b;
        int t;
        cin >> a >> b >> t;
        unordered_set<string> s;
        s.insert(a);
        s.insert(b);
        if(t <=d) {
            if(friends[s] == 0) {
                friendsV.push_back(a+" "+b);
                count++;
            }
            friends[s] = 1;
        }
    }

    cout << count << "\n";
    
    for(auto x: friendsV) {
        cout << x << "\n";
    }

} 