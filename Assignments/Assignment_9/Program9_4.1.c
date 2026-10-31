#include "Program9_4.3.h"

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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of a number is %d.\n", iRet);

    return EXIT_SUCCESS;
}