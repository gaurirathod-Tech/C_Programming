#include "Program_3.3.h"

/////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayEvenFactor
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays all even factors of the given
//                      number. If no even factors are found,
//                      displays an appropriate message.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    int iFlag = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\t", iCnt);
            iFlag = 1;
        }
    }

    if(iFlag == 0)
    {
        printf("Even factors not found");
    }

    printf("\n");
}