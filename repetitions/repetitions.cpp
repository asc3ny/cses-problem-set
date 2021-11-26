/* 
 * CSES: Repetitions
 * Status: READY
 * Time: 0.05 s
 * Characters: 411
 * Link: https://cses.fi/problemset/task/1069
 * TODO: Warning on compiler
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <char> chrLst;
    char usrInp;
    char lastChar;
    int globalCount = 0;
    int localCount = 0;

    while (cin >> usrInp) {
        chrLst.push_back(usrInp);
    }

    for (char chr : chrLst) {
        
        if (!lastChar) {
            lastChar = chr;
            localCount = 1;
            continue;
        }

        if (lastChar == chr) {
            localCount++;
            lastChar = chr;
        }

        if (lastChar != chr) {
            localCount = 1;
            lastChar = chr;
        }

        if (localCount > globalCount) {
            globalCount = localCount;
        }
    }

    cout << globalCount;

    return 0;
}
