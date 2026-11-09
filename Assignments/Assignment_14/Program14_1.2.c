#include "Program14_1.3.h"

////////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : It is used to calculate multiplication of
//                 factors of a given number.
// Input         : Integer
// Output        : Integer
// Date          : 09/11/2026
// Author        : Gauri Prakash Rathod 
//
////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFactMul = 0;
    iFactMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactMul = iFactMul * iCnt;
        }
    }

    return iFactMul;
}