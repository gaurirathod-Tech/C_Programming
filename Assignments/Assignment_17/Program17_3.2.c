#include "Program17_3.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays an alternate pattern of alphabets and numbers.
//  Input         : Integer, Integer
//  Output        : Displays an alternate pattern of alphabets and numbers.
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch = 'a';

            for(j = 1; j <= iCol; j++, ch++)
            {
                printf("%5c\t", ch);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%5d\t", j);
            }
        }

        printf("\n");
    }
}