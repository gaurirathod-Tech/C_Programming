#include "Program4_5.3.h"

//////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisibility
//  Input           :   Integer 
//  Output          :   None
//  Description     :   Checks whether the given number is divisible
                        by 5 and displays the result.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
    { 
    if(iValue % 5 == 0) 
    { 
    printf("Divisible by 5.");
    } 
    else
    { 
    printf("Not divisible by 5."); 
    } 
}
