#include "Program24_4.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description   : Finds the index of the last occurrence of the
//                  given character in the given string.
//  Input         : Character pointer (String), Character
//  Output        : Returns the index of the last occurrence if found,
//                  otherwise returns -1.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLastIndex = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLastIndex = iIndex;
        }

        iIndex++;
        str++;
    }

    return iLastIndex;
}
