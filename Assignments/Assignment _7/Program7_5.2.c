#include "Program7_1.3.h"

/////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : It is used to display the first 5 
//                  multiples of a given number
//  Input         : Integer
//  Output        : void
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
            printf("%d\t", (iCnt * iNo));
    }
}