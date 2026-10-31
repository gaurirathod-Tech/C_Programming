#include "Program9_3.3.h"

////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : It is used to calculate the product of all even
//                  numbers up to a given number
//  Input         : Integer
//  Output        : Integer
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0 , iFact =0;

    iFact = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
             iFact = iFact * iCnt;
        }
       
    }

    return iFact;
}
