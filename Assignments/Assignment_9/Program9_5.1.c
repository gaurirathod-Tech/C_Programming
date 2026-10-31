#include "Program9_5.3.h"

//////////////////////////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d.\n", iRet);

    return EXIT_SUCCESS;
}