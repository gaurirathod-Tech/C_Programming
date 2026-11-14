#include "Program23_1.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Converts all uppercase characters in a string into
//                  lowercase characters.
//  Input         : Character pointer (String)
//  Output        : Modified string with all uppercase characters
//                  converted into lowercase.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')  && (*str <= 'Z')) 
        {
            *str = *str + 32 ;
        }   
        str++; 
    }
}

