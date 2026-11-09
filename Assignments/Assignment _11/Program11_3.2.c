#include "Program11_3.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   RangeSum
//  Description   :   It is used to calculate the sum of all positive integers 
//                    within a given range.
//  Input         :   Integer, Integer
//  Output        :   Integer
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if((iStart <= 0) || (iEnd <= 0) || (iStart > iEnd))
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}