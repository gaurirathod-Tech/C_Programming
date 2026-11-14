#include "Program24_2.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description   : Counts the frequency of the given character
//                  in the given string.
//  Input         : Character pointer (String), Character
//  Output        : Returns the total frequency of the character.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }

        str++;
    }
    return iCount;
}
