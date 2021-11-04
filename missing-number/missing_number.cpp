// CSES: Missing Number
// In progress

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int maxLength;
    cin >> maxLength;
 
    int listNumbers[maxLength];
    for (int i = 0; i < maxLength-1; ++i)
    {
        cin >> listNumbers[i];
    }
 
    sort(listNumbers, listNumbers + maxLength);
    for (int i = 1; i < maxLength; ++i)
    {
        if (listNumbers[i] != i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
