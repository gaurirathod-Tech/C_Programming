#include "Program17_2.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a pattern of even and odd numbers
//                  in alternate rows.
//  Input         : Integer, Integer
//  Output        : Displays the pattern of even and odd numbers.
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
                printf("%5d\t", 2 * j);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%5d\t", (2 * j) - 1);
            }
        }
        printf("\n");
    }
    
}