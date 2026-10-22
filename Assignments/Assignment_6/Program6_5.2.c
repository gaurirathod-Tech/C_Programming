#include "Program_5.3.h"


///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateBonus
//  Input           :   Float (Salary), Integer (Years of Service)
//  Output          :   None
//  Description     :   Calculates and displays the employee bonus
                        based on salary and years of service.
                        15% bonus is given for more than 10 years
                        of service.
                        10% bonus is given for 5 to 10 years
                        of service.
                        5% bonus is given for less than 5 years
                        of service.
                        Displays "Invalid Input" if salary or
                        years of service is negative.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((fSalary < 0) || (iYears < 0))
    {
        printf("Invalid Input");
        return;
    }

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("%.0f   %d  -> Bonus = %.2f", fSalary, iYears, fBonus);
}

