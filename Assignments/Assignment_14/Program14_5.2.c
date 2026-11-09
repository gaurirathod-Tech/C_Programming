#include "Program14_5.3.h"

//////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description   : It returns difference between summation of
//                  factors and non-factors of a number.
//  Input         : Integer
//  Output        : Integer
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iDiff = iFactSum - iNonFactSum;

    return iDiff;
}