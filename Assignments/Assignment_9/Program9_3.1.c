#include "Program9_3.3.h"

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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of a number is %d.\n", iRet);

    return EXIT_SUCCESS;
}