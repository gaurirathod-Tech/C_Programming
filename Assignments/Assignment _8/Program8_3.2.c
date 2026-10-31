#include "Program8_3.3.h"

//////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description   : It is used to calculate the factorial 
//                  of a given number
//  Input         : Integer
//  Output        : Integer
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0 , iFact =0;

    iFact = 1; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}