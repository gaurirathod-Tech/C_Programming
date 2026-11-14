#include "Program27_4.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Checks whether the given string contains at least
//                  one vowel or not.
//  Input         : Character pointer (String)
//  Output        : Returns TRUE if a vowel is found, otherwise FALSE.
//                  otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U') ||
           (*str == 'a') || (*str == 'e') || (*str == 'i') ||
           (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}