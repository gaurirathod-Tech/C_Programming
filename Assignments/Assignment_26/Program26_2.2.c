#include "Program26_2.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Converts a capital letter into a small letter and
//                  a small letter into a capital letter. If the given
//                  character is neither a capital nor a small letter,
//                  it displays the character as it is.
//  Input         : Character
//  Output        : Displays the converted character or the original
//                  character if no conversion is required.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c", ch + 32);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}