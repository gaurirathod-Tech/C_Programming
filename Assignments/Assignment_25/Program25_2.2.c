#include "Program25_2.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : Checks whether the given character is a capital
//                  (uppercase) alphabet or not.
//  Input         : Character
//  Output        : Returns TRUE if the character is a capital
//                  alphabet, otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}