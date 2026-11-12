#include "Program19_4.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display a square pattern of stars
//                  with boundary stars and diagonal stars.
//  Input         : Integer, Integer
//  Output        : Displays a square pattern of stars
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
            if((i == 1) || (i == iRow) ||
               (j == 1) || (j == iCol) ||
               (i == j))
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