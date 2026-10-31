#include "Program9_1.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : void
//  Description   : It is used to display a given number of * followed
//                  by # symbols.
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0, jCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 2; iCnt++)
    {
        for(jCnt = 1; jCnt <= iNo; jCnt++)
        {
            if(iCnt == 1)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
    }
}