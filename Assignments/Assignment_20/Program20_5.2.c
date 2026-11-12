#include "Program20_5.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a pattern of column numbers along
//                  the boundary and primary diagonal elements.

//                  The first row, last row, first column,
//                  last column and primary diagonal elements
//                  are displayed using their respective
//                  column numbers.
//
//                  The remaining positions are left blank.
//
//  Input         : Integer, Integer
//  Output        : Displays a pattern of column numbers along
//                  the boundary and primary diagonal elements.
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
            if((i == 1) || (i == iRow) ||
               (j == 1) || (j == iCol) ||
               (i == j))
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n\n\n");
    }
}