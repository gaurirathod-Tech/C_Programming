#include "Program19_2.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays Inverted Right-Angled Triangle Star Pattern.
//  Input         : Integer, Integer
//  Output        : Displays Inverted Right-Angled Triangle Star Pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input :(\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i + j) <= (iCol + 1))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

