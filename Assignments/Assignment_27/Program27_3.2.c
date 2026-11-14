#include "Program27_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description   : Calculates the difference between the count of lowercase
//                  and uppercase characters in a given string.
//  Input         : Character pointer (String)
//  Output        : Returns the difference between lowercase and uppercase
//                  character counts.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmallCount = 0, iCapitalCount = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCount++;
        }

        str++;
    }

    iDiff = iSmallCount - iCapitalCount;

    return iDiff;
}