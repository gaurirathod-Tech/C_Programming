#include "Program6_4.3.h"

////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
