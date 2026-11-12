#include "Program21_4.3.h"

/////////////////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Displays a rectangular pattern using '*' and '#'
//                  characters alternately in each row.
//
//                  '*' is displayed at odd column positions.
//                  '#' is displayed at even column positions.
//  Input         : Integer, Integer
//  Output        : Displays the pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow ;i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j % 2) == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    } 
}
