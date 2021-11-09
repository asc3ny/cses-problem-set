// CSES: Missing Number
// Status: READY
// Time: 0.08 s
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int count = 1;
    int maxLng;
    cin >> maxLng;
 
    int nmbrs[maxLng-1];
    for (int i = 0; i < maxLng-1; ++i) {
        cin >> nmbrs[i];
    }
 
    sort(nmbrs, nmbrs + maxLng-1);
    for (int i = 0; i < maxLng; ++i) {
        if (nmbrs[i] != count) {
            cout << count << endl;
            break;
        }
        ++count;
    }
    return 0;
}
