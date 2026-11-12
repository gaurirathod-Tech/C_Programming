#include "Program21_2.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a rectangular pattern of numbers from 1 to
//                  the specified number of columns in each row.
//  Input         : Integer, Integer
//  Output        : Displays the rectangular number pattern.
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
                printf("%d\t",j);
        }

        printf("\n\n\n");
    }
}