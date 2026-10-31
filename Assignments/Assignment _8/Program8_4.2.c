#include "Program8_4.3.h"

///////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description   : It is used to display the multiplication 
//                  table of a given number
//  Input         : Integer
//  Output        : void
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
            printf("%d\t", (iCnt * iNo));
    }
}