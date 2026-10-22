#include "Program5_4.3.h"

////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
