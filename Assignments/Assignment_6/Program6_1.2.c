#include "Program_1.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateElectricityBill
//  Input           :   Integer (Units Consumed)
//  Output          :   None
//  Description     :   Calculates the electricity bill based on the
                        number of units consumed and displays the
                        total bill amount.
                        Displays "Invalid input" if the units are negative.
                        Charges:
                        First 100 units  : Rs. 5 per unit
                        Next 100 units   : Rs. 7 per unit
                        Above 200 units  : Rs. 10 per unit
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid input");
        return;
    }

    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }

    printf("%d -> Bill = %.2f", iUnits, fBill);
}

