#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for(int i=0; i < n; i++) {
        string w;
        cin >> w;
        if(w[1] == '+') count++;
        else if(w[1] == '-') count--;
    }
    cout << count << "\n";
}
