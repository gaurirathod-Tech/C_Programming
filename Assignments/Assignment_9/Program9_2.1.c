#include "Program9_2.3.h"

//////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d. \n",iRet);

    return EXIT_SUCCESS;
}