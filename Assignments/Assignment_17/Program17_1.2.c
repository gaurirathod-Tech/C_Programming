#include "Program17_1.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display continuous numbers
//                  from 1 to 9 repeatedly in a row-wise pattern.
//  Input         : Integer, Integer
//  Output        : Displays a repeated number pattern.
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
            printf("%5d\t", iNum);

            iNum++;

            if(iNum > 9)
            {
                iNum = 1;
            }
        }
        printf("\n\n");
    }
}