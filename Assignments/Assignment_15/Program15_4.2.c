#include"Program15_4.3.h"

/////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : It is used to calculate multiplication
//                  of three numbers.
//  Input         : Integer, Integer, Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 1;

    if(iNo1 != 0)
    {
        iMul = iMul * iNo1;
    }

    if(iNo2 != 0)
    {
        iMul = iMul * iNo2;
    }

    if(iNo3 != 0)
    {
        iMul = iMul * iNo3;
    }

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
        return 0;
    }

    return iMul;
}