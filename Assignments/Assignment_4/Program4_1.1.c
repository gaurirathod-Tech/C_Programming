#include "Program_1.3.h"

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

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
