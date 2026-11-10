#include "Program18_5.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a square pattern with column numbers
//                  along the boundary and '*' symbols in the
//                  inner region of the matrix.
//  Input         : Integer, Integer
//  Output        : Displays the pattern
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

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
            if((i > 1) && (i < iRow) && (j > 1) && (j < iCol))
            {
                printf("*\t");
            }
            else if((i == 1) || (i == iRow))
            {
                printf("%d\t", j);
            }
            else if(j == 1)
            {
                printf("1\t");
            }
            else
            {
                printf("%d\t", iCol);
            }
        }
        printf("\n");
    }
}