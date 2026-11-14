#include "Program27_5.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description   : Reverses the given string using two pointers.
//  Input         : Character pointer (String)
//  Output        : Reverses the string in place.
//                  in the given string.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}