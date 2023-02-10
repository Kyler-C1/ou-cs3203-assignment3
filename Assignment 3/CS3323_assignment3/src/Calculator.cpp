#include "Calculator.h"

Calculator::Calculator()
{
    //ctor
}

Calculator::~Calculator()
{
    //dtor
}



int Calculator::computeSum(int* allVals, int length){
    int sum = 0;
    for(int j = 0; j < length; ++j){
        sum += allVals[j];
    }
    return sum;
}

int Calculator::computeProduct(int* allVals, int length){
    int product = 1;
    for(int i = 0; i < length; ++i){
        product = product * allVals[i];
    }
    if (length <= 0) product = 0;
    return product;

    //added comments for the part 10
}

int* Calculator::flipOrder(int* allVals, int length){
    for(int m = 0; m < (length/2); ++m){
        int temp = allVals[m];
        allVals[m] = allVals[length - 1- m];
        allVals[length - 1 - m] = temp;
    }
    return allVals;

}
