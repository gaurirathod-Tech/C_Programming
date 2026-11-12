#include "Program22_4.3.h"

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Displays a pattern of '#' character, increasing
//                  numbers and '*' character.
//
//                  Each number is printed in ascending order
//                  starting from 1 up to the given number.
//                  Every number is preceded by '#' and followed
//                  by '*' character.
//
//  Input         : Integer
//  Output        : Displays the Pattern.
//  Date          : 12/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }
    printf("\n");
}

