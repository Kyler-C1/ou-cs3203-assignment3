#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{


    int startVals[] = {2 ,4, 2 , 8, 9, 12, 33, 1};
    int k = sizeof(startVals)/sizeof(int);
    Calculator* original = new Calculator();
    cout << original->computeSum(startVals, k)<<endl;
    return 0;
}
