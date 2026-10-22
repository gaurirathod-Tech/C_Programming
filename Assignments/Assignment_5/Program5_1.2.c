#include "Program_1.3.h"

//////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreatest
//  Input           :   Three Integers 
//  Output          :   None
//  Description     :   Compares three numbers and displays the greatest
                        number among them.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}
