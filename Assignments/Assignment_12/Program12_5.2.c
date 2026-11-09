#include "Program12_5.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Count
//  Description   :   It is used to count the digits which are less
//                    than 6 in the given number.
//  Input         :   Integer
//  Output        :   Integer
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}