#include "Program26_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a character from the user and displays
//                  characters according to the following conditions:
//
//                  If the given character is a capital letter
//                  (A to Z), it displays characters from the
//                  given character up to 'Z' in forward order.
//
//                  If the given character is a small letter
//                  (a to z), it displays characters from the
//                  given character down to 'a' in reverse order.
//
//                  If the given character is neither a capital
//                  nor a small letter, the function returns
//                  without displaying anything.
//
//  Input         : Character
//  Output        : Displays the sequence of characters.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c ", iCnt);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c ", iCnt);
        }
    }
    else
    {
        return;
    }
}