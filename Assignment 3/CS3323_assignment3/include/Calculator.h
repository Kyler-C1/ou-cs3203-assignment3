#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        Calculator();
        int computeSum(int* allVals, int length);
        int computeProduct(int* allVals, int length);
        int* flipOrder(int* allVals, int length);
        virtual ~Calculator();

    protected:

    private:
};

#endif // CALCULATOR_H
