#include "Program22_2.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a pattern of decreasing numbers followed
//                  by the '#' character.
//
//                  Numbers are printed in descending order starting
//                  from the given number up to 1.
//                  Each number is followed by the '#' character.
//
//  Input         : Integer
//  Output        : Displays the Pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
    printf("\n");
}