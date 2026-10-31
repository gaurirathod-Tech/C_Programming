#include "Program10_3.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : KMToMeter
//  Description   : It is used to convert distance from kilometers to meters
//  Input         : Integer
//  Output        : Integer
//  Author        : Gauri Prakash Rathod
//  Date          : 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////

int KMToMeter(int iDistance)
{
    int iDistanceInMeter = 0;

    iDistanceInMeter = iDistance * KM_TO_METER;

    return iDistanceInMeter;
}