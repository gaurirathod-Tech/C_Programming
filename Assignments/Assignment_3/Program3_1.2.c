#include "Program_1.3.h"

/////////////////////////////////////////////////////////
//
//  Function Name   :   PrintEven
//  Input           :   Integers
//  Output          :   None
//  Description     :   Prints even numbers up to the
//                      given positive number
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d\t", iCnt * 2);
        }
    }

    printf("\n");
}
