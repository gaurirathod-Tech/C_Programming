#include "Program15_4.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);

    return EXIT_SUCCESS;
}