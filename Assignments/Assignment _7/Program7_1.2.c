#include "Program7_1.3.h"

////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Input         : Integer
//  Output        : void
//  Description   : It is used to display a pattern of $ and *.
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<=iNo ;iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}
