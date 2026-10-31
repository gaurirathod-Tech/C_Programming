#include "Program7_4.3.h"

//////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description   : It is used to display odd numbers till
//                  a given number
//  Input         : Integer
//  Output        : void
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
