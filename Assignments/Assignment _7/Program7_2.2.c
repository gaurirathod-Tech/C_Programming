#include "Program7_2.3.h"

////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : void
//  Description   : It is used to display numbers from 1 to iNo.
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo ;iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}
