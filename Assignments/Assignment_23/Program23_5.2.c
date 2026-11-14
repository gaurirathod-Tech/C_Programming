#include "Program23_5.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description   : Counts the total number of white spaces present
//                  in the given string.
//  Input         : Character pointer (String)
//  Output        : Returns the total count of white spaces.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}