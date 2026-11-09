#include "Program13_4.3.h"

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description   : Calculates the product of all digits of a given integer.
//  Input         : Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod  
//
/////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 0;
    iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMul = iMul * iDigit;

        iNo = iNo / 10;
    }

    return iMul;
}