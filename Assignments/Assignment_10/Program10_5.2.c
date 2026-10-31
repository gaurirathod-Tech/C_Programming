#include "Program10_5.3.h"

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : It is used to convert area from square feet to square meters
//  Input         : Integer
//  Output        : Double
//  Author        : Gauri Prakash Rathod
//  Date          : 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dAreaInSquareMeter = 0.0;

    dAreaInSquareMeter = iValue * SQFT_TO_SQM;

    return dAreaInSquareMeter;

}

