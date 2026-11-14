#include "Program24_1.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Checks whether the given character is present
//                  in the given string or not.
//  Input         : Character pointer (String), Character
//  Output        : Returns TRUE if character is found,
//                  otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}
