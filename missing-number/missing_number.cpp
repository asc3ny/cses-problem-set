/* CSES: Missing Number
 * Status: READY
 * Time: 0.07 s
 * Characters: 225
*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int lngMax;
    cin >> lngMax;
 
    vector <int> nmbrs(lngMax);	
    int usrInp;
 
    while (cin >> usrInp) {
        nmbrs.at(usrInp-1) = usrInp;
    }
 
    int count = 1;
    for (int nmbr : nmbrs) {
        if (!nmbr) {
            cout << count;
        }
        count++;
    }
 
    return 0;
}
