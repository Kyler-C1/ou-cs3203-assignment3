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
    cout << "Sum"<< original->computeSum(startVals, numEntries)<<endl;
    cout << "Product"<< original->computeProduct(startVals, numEntries)<<endl;
    cout<<"Printing Reverse Values"<<endl;
    int* reverseVals = original->flipOrder(startVals, numEntries);
    for(int t = 0; t < numEntries -1; ++t){
        cout<<reverseVals[t] << ", ";
    }
    cout<<reverseVals[numEntries - 1] <<endl;
    return 0;
}
