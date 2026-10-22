#include "Program_4.3.h"

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Input           :   Integer
//  Output          :   None
//  Description     :   Converts an uppercase alphabet into lowercase
//                      and a lowercase alphabet into uppercase.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////

void DisplayConvert(int cValue)
{
    if((cValue >= 65) &&(cValue <= 90))
    {
        printf("%c",(cValue + 32));
    }
    else if((cValue >= 97) &&(cValue <= 122))
    {
        printf("%c",(cValue - 32));
    }
}