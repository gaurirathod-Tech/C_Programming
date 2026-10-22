#include "Program4_1.3.h"

/////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumber
//  Input           :   Integers
//  Output          :   None
//  Description     :   Checks whether the given number is
//                      Zero, Positive, or Negative
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue == 0)
    {
        printf("Zero");
    }
    else if(iValue < 0)
    {
        printf("Negative number.");
    }
    else
    {
        printf("Positive number.");
    }
}

