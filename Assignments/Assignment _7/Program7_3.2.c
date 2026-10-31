#include "Program7_3.3.h"

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : void
//  Description   : It is used to accept an integer and display 
//                  its number line from -iNo to iNo, including zero.
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}