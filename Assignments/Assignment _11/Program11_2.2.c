#include "Program11_2.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   RangeDisplayEven
//  Description   :   It is used to display all even numbers within the
//                    specified range.
//  Input         :   Integer, Integer
//  Output        :   Displays even numbers within the specified range.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range \n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }

    printf("\n");
}