#include "Program11_5.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   RangeDisplayRev
//  Description   :   It is used to display all integers within a given range
//                    in reverse order.
//  Input         :   Integer, Integer
//  Output        :   None
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}