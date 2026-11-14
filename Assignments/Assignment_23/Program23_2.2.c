#include "Program23_2.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Description   : Accepts a string from the user, converts all
//                  lowercase characters into uppercase characters
//                  using struprx() and displays the modified string.
//  Input         : Character pointer (String)
//  Output        : Modified string with all lowercase characters
//                  converted into uppercase.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z')) 
        {
            *str = *str - 32 ;
        }   
        str++; 
    }
}