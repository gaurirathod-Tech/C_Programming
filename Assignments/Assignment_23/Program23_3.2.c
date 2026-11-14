#include "Program23_3.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : strtogglex
//  Description   : Toggles the case of each alphabet in a string.
//                  Converts lowercase characters into uppercase and
//                  uppercase characters into lowercase.
//  Input         : Character pointer (String)
//  Output        : Modified string with toggled case of each alphabet.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}