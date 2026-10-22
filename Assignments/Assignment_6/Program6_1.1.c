#include "Program6_1.3.h"

////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
