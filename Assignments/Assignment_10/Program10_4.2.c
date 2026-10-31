#include "Program10_4.3.h"

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : It converts temperature from Fahrenheit to Celsius.
//  Input         : Float
//  Output        : Double
//  Author        : Gauri Prakash Rathod
//  Date          : 31/10/2026
//
////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;

    fCelsius = fCelsius = ((fTemp - 32) * 5) / 9;

    return fCelsius;
}