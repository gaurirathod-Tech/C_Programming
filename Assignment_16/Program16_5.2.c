#include "Program16_5.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display continuous numbers
//                  row-wise in a pattern.
//  Input         : Integer, Integer
//  Output        : Displays a continuous number pattern.
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);
            iNum++;
        }
        printf("\n\n");
    }
}