#include "Program26_1.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Displays the ASCII table from 0 to 255 with its
//                  Symbol, Decimal, Hexadecimal and Octal values.
//  Input         : None
//  Output        : Displays the ASCII table.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("+--------+---------+--------------+--------+\n");
    printf("| Symbol | Decimal | Hexadecimal  | Octal  |\n");
    printf("+--------+---------+--------------+--------+\n");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i <= 126)
        {
            printf("|   %c    |   %3d   |      %02X      |  %03o   |\n", i, i, i, i);
        }
        else
        {
            printf("|   -    |   %3d   |      %02X      |  %03o   |\n", i, i, i, i);
        }
    }

    printf("+--------+---------+--------------+--------+\n");
}


