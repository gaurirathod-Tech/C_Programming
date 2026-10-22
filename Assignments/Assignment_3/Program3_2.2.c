#include "Program_2.3.h"

/////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all factors of the given
//                      number
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}