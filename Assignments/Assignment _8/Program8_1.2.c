#include "Program8_1.3.h"

//////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : It is used to check whether a given
//                  number is Small, Medium or Large.
//  Input         : Integer
//  Output        : void
//  Date          : 31/10/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Number is 50 or 100");
    }
}