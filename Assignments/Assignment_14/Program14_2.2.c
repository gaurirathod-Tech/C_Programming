#include "Program14_2.3.h"

////////////////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : It is used to display all factors of a given
//                 number in reverse order.
// Input         : Integer
// Output        : None
// Date          : 09/11/2026
// Author        : Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}