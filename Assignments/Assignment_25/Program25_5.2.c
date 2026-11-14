#include "Program25_5.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Displays the examination timing according to
//                  the division entered by the student.
//  Input         : Character
//  Output        : Displays the examination timing of the respective
//                  division or an invalid division message.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char cValue)
{
    switch(cValue)
    {
        case 'A':
            printf("Your Exam at 7:00 AM.");
            break;

        case 'B':
            printf("Your Exam at 8:30 AM.");
            break;

        case 'C':
            printf("Your Exam at 9:20 AM.");
            break;

        case 'D':
            printf("Your Exam at 10:30 AM.");
            break;

        default:
            printf("Invalid Division.");
            break;
    }
}