#include "Program19_5.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display an upper right
//                  triangular number pattern.
//  Input         : Integer, Integer
//  Output        : Displays an upper right triangular pattern
//  Date          : 12/11/2026
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
            if(i <= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n");
    }
}