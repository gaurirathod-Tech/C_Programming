#include "Program12_2.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   ChkZero
//  Description   :   It is used to check whether the given integer number
//                    contains zero or not.
//  Input         :   Integer
//  Output        :   Returns TRUE if the number contains zero,
//                    otherwise returns FALSE.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        return TRUE;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}