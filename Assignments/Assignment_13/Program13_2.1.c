#include "Program13_2.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}