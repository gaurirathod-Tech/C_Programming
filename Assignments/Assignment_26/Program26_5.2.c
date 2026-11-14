#include "Program26_5.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays the ASCII value of a given character in
//                  Decimal, Octal and Hexadecimal formats.
//  Input         : Character
//  Output        : Displays ASCII value in Decimal, Octal and Hexadecimal.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : 0%o\n",ch);
    printf("Hexadecimal : 0X%X\n",ch);

}