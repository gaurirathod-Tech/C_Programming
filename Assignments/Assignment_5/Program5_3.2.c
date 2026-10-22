#include "Program_3.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayGrade
//  Input           :   Float (Marks)
//  Output          :   None
//  Description     :   Validates the given marks and displays the
                        corresponding grade based on the marks obtained.
                        Displays "Invalid Marks" if the marks are less
                        than 0 or greater than 100.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if((fMarks < 0) || (fMarks > 100))
    {
        printf("%.0f -> Invalid Marks\n",fMarks);
        return;
    }

    switch((int)fMarks / 10)
    {
        case 10:
        case 9:
            printf("%.0f -> Grade A\n", fMarks);
            break;

        case 8:
            printf("%.0f -> Grade B\n", fMarks);
            break;

        case 7:
            if(fMarks >= 75)
            {
                printf("%.0f -> Grade B\n", fMarks);
            }
            else
            {
                printf("%.0f -> Grade C\n", fMarks);
            }
            break;

        case 6:
            printf("%.0f -> Grade C\n", fMarks);
            break;

        case 5:
            printf("%.0f -> Grade D\n", fMarks);
            break;

        case 4:
            printf("%.0f -> Pass\n", fMarks);
            break;

        default:
            printf("%.0f -> Fail\n", fMarks);
            break;
    }
}
