#include "Program11_1.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   RangeDisplay
//  Description   :   It is used to display all integers within the
//                    specified range (inclusive).
//  Input         :   Integer, Integer
//  Output        :   Displays all integers within the specified range.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range \n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}