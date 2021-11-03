// CSES: Missing Number
// In progress

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int maxLength;
    int flag = 1;
    cin >> maxLength;
    
    int listNumbers[maxLength];
    for (int i = 0; i < maxLength; ++i) 
    {
        cin >> listNumbers[i];
    }
        
    sort(listNumbers, listNumbers + maxLength);
    for (int i = 1; i < maxLength; ++i)
    {
        if (listNumbers[i] != i)
        {
            cout << listNumbers[i] << ' ';
        }
    }
    
    return 0;
}
