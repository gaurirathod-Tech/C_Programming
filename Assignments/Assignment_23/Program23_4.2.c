#include "Program23_4.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Displays only the digit characters present in the
//                  given string.
//  Input         : Character pointer (String)
//  Output        : Displays all digits from the string on a single line.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }

        str++;
    }
}