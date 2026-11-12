#include "Program21_1.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a rectangular pattern of '*' characters
//                  with the specified number of rows and columns.
//  Input         : Integer, Integer
//  Output        : Displays the rectangular star pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
                printf("*\t");
        }

        printf("\n\n\n");
    }
}