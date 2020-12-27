#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n, k, kth;
   int count = 0;
   cin >> n >> k;
   vector<int> scores(n);

   for(int i=0; i<n; i++) {
       cin >> scores[i];
   }
   kth = scores[k-1];

   for(int i=0; i<n ; i++) {
       if(scores[i]>=kth && scores[i]>0) count++;
   } 
   cout << count << "\n";
}
