#include <iostream>
#include <math.h>
#include <vector>
#include <map>

using namespace std;


int main() {
    int n;
    cin >> n;
    map<int, int> groups;
    int taxiCount = 0;
    for(int i=0; i<n; i++) {
        int g;
        cin >> g;
        groups[g]++;
    }
    taxiCount+=groups[4];
    taxiCount+= groups[3];
    groups[1]-=groups[3];
    if(groups[1]<0) {
        groups[1]=0;
    }
    if(groups[2]%2==0) {
        taxiCount+=groups[2]/2;
        groups[2]=0;
    } else {
        taxiCount+=(groups[2]-1)/2;
        groups[2]=1;
    }

    taxiCount+=groups[2]+groups[1];
    
    cout << taxiCount ;
   
}