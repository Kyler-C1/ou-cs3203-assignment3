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

Calculator::computeProduct(int* allVals, int length){
    int product = 1;
    for(int i = 0; i < length; ++i){
        product = product * allVals[i];
    }
    if (length <= 0) product = 0;
    return product;
}
