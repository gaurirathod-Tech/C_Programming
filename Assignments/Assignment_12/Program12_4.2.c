#include "Program12_4.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   CountFour
//  Description   :   It is used to count the frequency of digit 4 in a
//                    given integer number.
//  Input         :   Integer
//  Output        :   Returns the frequency of digit 4.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

     if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}