#include "Program21_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a rectangular pattern of numbers in reverse
//                  order from the specified number of columns to 1.
//  Input         : Integer, Integer
//  Output        : Displays the reverse rectangular number pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
                printf("%d\t",j);
        }

        printf("\n\n\n");
    }
}