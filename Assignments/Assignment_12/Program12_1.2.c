#include "Program12_1.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   DisplayDigit
//  Description   :   It is used to display each digit of a given integer
//                    number in reverse order.
//  Input         :   Integer
//  Output        :   Displays each digit on a new line.
//  Date          :   09/11/2026
//  Author        :   Gauri Prakash Rathod  
//
////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    if(iNo == 0)
    {
        printf("0\n");
        return;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;                                     
        printf("%d\n",iDigit);   
        iNo = iNo / 10;   
    }
}