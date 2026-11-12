#include "Program22_5.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays the table of 2 up to the given number
//                  of terms.Each term is calculated by multiplying the
//                  counter value by 2.
//
//  Input         : Integer
//  Output        : Displays the table of 2
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",(iCnt * 2));
    }
    printf("\n");
}

