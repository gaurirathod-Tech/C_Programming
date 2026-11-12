#include "Program20_4.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a square pattern of '*', '#' and '$'
//                  characters.If the dimensions are equal, displays a
//                  square pattern using '*', '#' and '$'
//                  characters.
//
//                  '*' is displayed on the first row, last row,
//                  first column, last column and secondary diagonal.
//
//                  '#' is displayed above the secondary diagonal,
//                  excluding the boundary elements.
//
//                  '$' is displayed below the secondary diagonal,
//                  excluding the boundary elements.
//
//  Input         : Integer, Integer
//  Output        : Displays a square pattern of '*', '#' and '$'
//                  characters.
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
            else if((i + j) < (iCol + 1))
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");  
            }
        }

        printf("\n\n\n");
    }
}