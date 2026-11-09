#include "Program14_4.3.h"

////////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : It is used to calculate the sum of non-factors
//                 of a given number.
// Input         : Integer
// Output        : Integer
// Date          : 09/11/2026
// Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return(iSum);
}