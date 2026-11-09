#include "Program14_3.3.h"

////////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : It is used to display all non-factors of a
//                 given number.
// Input         : Integer
// Output        : None
// Date          : 09/11/2026
// Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}