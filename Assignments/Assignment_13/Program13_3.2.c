#include "Program13_3.3.h"

////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description   : It is used to count the digits between 3 and 7.
//  Input         : Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
        { 
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}