#include "Program16_4.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display a reverse row-wise
//                  number pattern.
//  Input         : Integer, Integer
//  Output        : Displays a reverse number pattern.
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1 ;i--)
    {

        for(j = 1; j <= iCol; j++)
        {
           printf("%d\t",i);
        }
        printf("\n\n");
    } 
} 