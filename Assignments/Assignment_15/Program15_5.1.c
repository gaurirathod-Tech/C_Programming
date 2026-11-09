#include "Program15_5.3.h"

///////////////////////////////////////////////////
//
// Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter Total marks : \n");
    scanf("%d", &iValue1);

    printf("Please enter Obtained marks : \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage : %.2f%%\n", fRet);

    return EXIT_SUCCESS;
}