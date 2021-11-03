// CSES: Weird Algorithm
 
#include <iostream>
using namespace std;

int main() 
{
    long int inputNumber;
    cin >> inputNumber;

    while (true)
    {
        cout << inputNumber << " ";

        if (inputNumber == 1) {
            break;
        } else if (inputNumber % 2 == 0) {
            inputNumber = inputNumber / 2;
        } else {
            inputNumber = (inputNumber * 3) + 1;
        }
    }
    return 0;
}
