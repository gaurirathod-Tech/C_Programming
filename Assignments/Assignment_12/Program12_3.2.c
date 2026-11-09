#include "Program12_3.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   CountTwo
//  Description   :   It is used to count the frequency of digit 2 in a
//                    given integer number.
//  Input         :   Integer
//  Output        :   Returns the frequency of digit 2.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}