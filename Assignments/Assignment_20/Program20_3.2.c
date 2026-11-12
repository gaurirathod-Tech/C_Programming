#include "Program20_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a square pattern using '*' characters
//                  based on the position of each element.
//
//                  '*' is displayed on the boundary elements and
//                  on the secondary diagonal.

//                  Blank spaces are displayed in the remaining
//                  positions.

//  Input         : Integer, Integer
//  Output        : Displays the pattern
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

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
            if((i == 1) || (i == iRow) ||
               (j == 1) || (j == iCol) ||
               (i + j) == (iCol + 1))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n\n\n");
    }
}