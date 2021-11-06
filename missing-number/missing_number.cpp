// CSES: Missing Number
// Status: READY
// Time: 0.08 s
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int count = 1;
    int maxLength;
    cin >> maxLength;
 
    int listNumbers[maxLength-1];
    for (int i = 0; i < maxLength-1; ++i) {
        cin >> listNumbers[i];
    }
 
    sort(listNumbers, listNumbers + maxLength-1);
    for (int i = 0; i < maxLength; ++i) {
        if (listNumbers[i] != count) {
            cout << count << endl;
            break;
        }
        ++count;
    }
    return 0;
}
