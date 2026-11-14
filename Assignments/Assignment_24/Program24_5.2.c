#include "Program24_5.3.h"

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Description   : Reverses the given string using two pointer approach
//                  and swapping of characters.
//  Input         : Character pointer (String)
//  Output        : Reverses the original string in place.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
