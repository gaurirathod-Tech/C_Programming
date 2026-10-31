#include "Program9_1.3.h"

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : It calculates the difference between the factorial of 
//                  even and odd numbers up to the given number.
//  Input         : Integer
//  Output        : Integer
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0 , iFact1 =0, iFact2 = 0, iFactDiff = 0;

    iFact1 = 1; 
    iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
             iFact1 = iFact1 * iCnt;
        }
        else
        {
             iFact2 = iFact2 * iCnt;
        }
    }

    iFactDiff = iFact1 - iFact2;
    return iFactDiff;
}
