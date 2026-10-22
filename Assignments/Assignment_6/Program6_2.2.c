#include "Program6_2.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckAdmission
//  Input           :   Float (Marks), Integer (Age)
//  Output          :   None
//  Description     :   Checks the student's marks and age to determine
                        eligibility for admission.
                        The student is eligible if marks are at least
                        60 and age is at least 17.
                        Displays "Invalid Input" if marks are less than
                        0, greater than 100, or age is negative.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("%.0f    %d -> Eligible for Admission", fMarks, iAge);
    }
    else
    {
        printf("%.0f    %d -> Not Eligible", fMarks, iAge);
    }
}



