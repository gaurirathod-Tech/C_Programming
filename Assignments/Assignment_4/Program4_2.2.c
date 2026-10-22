#include "Program4_2.3.h"

///////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Input           :   Integer
//  Output          :   None
//  Description     :   Checks whether the given number is
//                      Even or Odd and displays the result
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if((iValue %2) ==0)
    {
        printf("Even number.");
    }
    else
    {
        printf("Odd number.");
    }
}
