#include "Program_3.3.h"

////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreater
//  Input           :   Two Integers
//  Output          :   None
//  Description     :   Compares two numbers and displays the greater
                        number.If both numbers are equal, displays
                        a message indicating that both numbers are equal.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater.\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is greater.\n",iSecond);
    }
    else
    {
        printf("Both numbers are equal.");
    }
}