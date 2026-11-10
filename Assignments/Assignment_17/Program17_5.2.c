#include "Program17_5.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays an incremental number pattern
//                  where each row starts with its row number.
//  Input         : Integer, Integer
//  Output        : Displays the number pattern
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%5d", i + j - 1);
        }

        printf("\n");
    }
}