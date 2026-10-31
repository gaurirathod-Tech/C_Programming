#include "Program8_5.3.h"

//////////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description   : It is used to display the multiplication table 
//                  of a given number in reverse order
//  Input         : Integer
//  Output        : void
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
            printf("%d\t", (iCnt * iNo));
    }
}
