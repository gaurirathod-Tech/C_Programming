#include "Program4_4.3.h"

////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVotingEligibility
//  Input           :   Integer (Age)
//  Output          :   None
//  Description     :   Checks the given age and displays whether the
                        person is eligible for voting, not eligible
                        for voting, or has entered an invalid age.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
////////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge <= 0)
    {
        printf("Invalid age.");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for voting.");
    }
    else
    {
        printf("Not eligible for voting.");
    }
}

