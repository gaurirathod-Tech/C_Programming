#include "Program5_2.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Input           :   Integer(Year)
//  Output          :   None
//  Description     :    Checks whether the given year is a leap year
                        or not and displays the result.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if((iYear % 400) == 0)
    {
        printf("%d -> Leap Year\n", iYear);
    }
    else if((iYear % 100) == 0)
    {
        printf("%d -> Not a Leap Year\n", iYear);
    }
    else if((iYear % 4) == 0)
    {
        printf("%d -> Leap Year\n", iYear);
    }
    else
    {
        printf("%d -> Not a Leap Year\n", iYear);
    }
}
