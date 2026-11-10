#include "Program16_3.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display an alphabet pattern.
//  Input         : Integer, Integer
//  Output        : Displays an alphabet pattern.
//  Date          : 10/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow ;i++, ch++)
    {

        for(j = 1; j <= iCol; j++)
        {
           printf("%c\t",ch);
        }
        printf("\n\n");
    } 
} 