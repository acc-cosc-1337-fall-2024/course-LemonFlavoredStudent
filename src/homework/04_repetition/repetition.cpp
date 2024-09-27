//add include statements
#include "repetition.h"
//add function(s) code here
int factorial(int num)
{
    auto total = 1;

    while (num > 0)
    {
        total = num*total;
        num--;
    }

    return total;
}

int gcd(int num1, int num2)
{
    auto temp = 0;
    while (num1 != num2)
    {
        if (num1<num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        else if (num1>num2)
        {
            num1=num1-num2;
        }
    }
    return num1;
}