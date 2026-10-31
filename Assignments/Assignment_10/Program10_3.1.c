#include "Program10_3.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Distance in Kilometers : \n");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in Meters is %d.\n", iRet);

    return EXIT_SUCCESS;
}