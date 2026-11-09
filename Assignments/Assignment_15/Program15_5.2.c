#include"Program15_5.3.h"

/////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description   : It is used to calculate the percentage
//                  of obtained marks.
//  Input         : Integer, Integer
//  Output        : Float
//  Date          : 09/11/2026
//  Author        : Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentage = 0.0f;

    // Handle the condition if total marks is 0
    if(iTotalMarks == 0)
    {
        return 0.0f;
    }

    fPercentage = ((float)iObtainedMarks / iTotalMarks) * 100;

    return fPercentage;
}