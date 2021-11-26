/* 
 * CSES: Increasing Array
 * Status: READY
 * Time: 0.09 s
 * Characters: 348
 * Link: https://cses.fi/problemset/task/1094/
 */

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int lngMax;
    int usrInp;
    int lstNumber = 0;
    long int rslt = 0;
 
    cin >> lngMax;
    vector <int> nmbrs;
 
    while (cin >> usrInp) {
        nmbrs.push_back(usrInp);
    }
 
    for (int nmbr : nmbrs) {
        
        if (!lstNumber) {
            lstNumber = nmbr;
            continue;
        }
 
        if (lstNumber > nmbr) {
            int diff = lstNumber - nmbr;
            lstNumber = nmbr + diff;
            rslt += diff;
        } else {
            lstNumber = nmbr;
        }
    }
 
    cout << rslt;
 
    return 0;
}
