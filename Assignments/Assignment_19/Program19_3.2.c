#include "Program19_3.3.h"

///////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a square pattern consisting of
//                  '$' on the main diagonal, '*' above the
//                  main diagonal and '#' below the main diagonal.
//  Input         : Integer, Integer
//  Output        : Displays the pattern
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    if(iRow != iCol)
    {
        printf("Invalid Input :(");
        return;
    }

    for(i = 1; i <= iRow ;i++)
    {

        for(j = 1; j <= iCol; j++)
        {
           if(i == j)          
           {
                printf("$\t");
           }
           else if(i < j)
           {
                 printf("*\t");
           }
           else
           {
                 printf("#\t");
           } 
        }
        printf("\n\n");
    } 
}