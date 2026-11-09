#include "Program13_5.3.h"

//////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description   : It returns the difference between the sum of
//                  even digits and the sum of odd digits of a
//                  given integer number.
//  Input         : Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0 , iDiff = 0, iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        { 
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff  = iEvenSum - iOddSum;

    return iDiff;
}