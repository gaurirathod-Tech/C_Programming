#include "Program_4.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateDiscount
//  Input           :   Float (Amount)
//  Output          :   None
//  Description     :   Checks whether the given three sides form a
                        valid triangle or not.
                        Displays "Valid Triangle" if the sum of any
                        two sides is greater than the third side.
                        Displays "Invalid Triangle" if any side is
                        less than or equal to zero or the triangle
                        inequality condition is not satisfied.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid Triangle");
    }
    else if((iSide1 + iSide2 > iSide3) &&
            (iSide1 + iSide3 > iSide2) &&
            (iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}
