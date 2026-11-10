#include "Program16_2.3.h"

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : It is used to display an alternate uppercase
//                  and lowercase alphabet pattern row-wise.
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

    for(i = 1; i <= iRow ;i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }
        }
        else
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                printf("%c\t",ch);
            }
        }
        printf("\n\n");
    } 
}