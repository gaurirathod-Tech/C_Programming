#include "Program17_4.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays alternate rows of positive and
//                  negative numbers in a pattern.
//  Input         : Integer, Integer
//  Output        : Displays the pattern.
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%5d", j);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%5d", -j);
            }
        }

        printf("\n");
    }
}