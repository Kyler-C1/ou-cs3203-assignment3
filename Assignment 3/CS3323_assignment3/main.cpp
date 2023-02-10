#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
     int* startVals;
    cout<<"Enter number of data entries"<<endl;
    int numEntries;
    cin >> numEntries;
    if(numEntries > 0){
         startVals = new int[numEntries]();
        cout<< "Enter first value"<<endl;
        cin >> startVals[0];
        for(int i = 1; i < numEntries; ++i){
            cout<< "Enter next Value"<<endl;
            cin >> startVals[i];
        }
    }

    Calculator* original = new Calculator();
    cout << original->computeSum(startVals, numEntries)<<endl;
    cout << original->computeProduct(startVals, numEntries)<<endl;
    return 0;
}
