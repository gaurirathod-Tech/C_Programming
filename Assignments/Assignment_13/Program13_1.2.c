#include "Program13_1.3.h"

////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : It is used to count the even digits in a
//                  given integer number.
//  Input         : Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        { 
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}