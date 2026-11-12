#include "Program22_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a pattern of increasing numbers followed
//                  by the '*' character.
//
//                  Numbers are printed in ascending order starting
//                  from 1 up to the given number.
//                  Each number is followed by the '*' character
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
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}

