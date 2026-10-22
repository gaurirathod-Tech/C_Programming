#include "Program5_4.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckMultipleDivisibility
//  Input           :   Integer
//  Output          :   None
//  Description     :   Checks whether the given number is divisible
                        by 3, by 5, by both 3 and 5, or by neither,
                        and displays the appropriate message.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("%d -> Divisible by Both\n", iValue);
    }
    else if((iValue % 3) == 0)
    {
        printf("%d -> Divisible by 3 Only\n", iValue);
    }
    else if((iValue % 5) == 0)
    {
        printf("%d -> Divisible by 5 Only\n", iValue);
    }
    else
    {
        printf("%d -> Not Divisible by Either\n", iValue);
    }
}


