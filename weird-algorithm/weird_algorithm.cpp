/* 
 * CSES: Weird Algorithm
 * Status: READY
 * Time: 0.01 s
 * Characters: 182
 * Link: https://cses.fi/problemset/task/1068
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long int inpNum;
    cin >> inpNum;
 
    while (true)
    {
        cout << inpNum << " ";
        if (inpNum == 1) break;
        if (inpNum % 2 == 0) inpNum /= 2;
        else inpNum = inpNum * 3 + 1;
    }
    return 0;
}
