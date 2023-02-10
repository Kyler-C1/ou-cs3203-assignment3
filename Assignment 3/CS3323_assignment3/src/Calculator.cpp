#include "Calculator.h"

Calculator::Calculator()
{
    //ctor
}

Calculator::~Calculator()
{
    //dtor
}



Calculator::computeSum(int* allVals, int length){
    int sum = 0;
    for(int j = 0; j < length; ++j){
        sum += allVals[j];
    }
    return sum;
}
