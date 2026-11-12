#include "Program21_5.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a rectangular pattern using row numbers.
//                  Each element in a row contains the current row
//                  number repeated across all columns.
//
//  Input         : Integer, Integer
//  Output        : Displays the pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow ;i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    } 
}