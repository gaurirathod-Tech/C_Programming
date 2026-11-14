#include "Program24_3.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Finds the index of the first occurrence of the
//                  given character in the given string.
//  Input         : Character pointer (String), Character
//  Output        : Returns the index if character is found,
//                  otherwise returns -1.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iFirstIndex = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iFirstIndex;
        }

        iFirstIndex++;
        str++;
    }

    return -1;
}
