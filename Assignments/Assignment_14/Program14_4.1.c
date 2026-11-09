#include "Program14_4.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d \n",iRet);

    return EXIT_SUCCESS;
}