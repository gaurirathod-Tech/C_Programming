#include "Program11_3.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending point : \n");
    scanf("%d", &iValue2);

    if((iValue1 <= 0) || (iValue2 <= 0) || (iValue1 > iValue2))
    {
        printf("Invalid Range\n");
    }
    else
    {
        iRet = RangeSum(iValue1, iValue2);
        printf("Addition is %d\n", iRet);
    }

    return 0;
}