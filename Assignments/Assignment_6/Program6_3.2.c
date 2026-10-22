#include "Program6_3.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateDiscount
//  Input           :   Float (Amount)
//  Output          :   None
//  Description     :   Calculates the discount and payable amount
                        based on the purchase amount.
                        No discount is applied if the amount is less
                        than Rs. 1000.
                        A 10% discount is applied if the amount is
                        between Rs. 1000 and Rs. 4999.99.
                        A 20% discount is applied if the amount is
                        Rs. 5000 or above.
                        Displays "Invalid Amount" if the amount is negative.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount");
        return;
    }

    if(fAmount < 1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount < 5000)
    {
        fDiscount = 0.10f;
    }
    else
    {
        fDiscount = 0.20f;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount);

    printf("Payable Amount = %.2f", fFinalAmount);
}
