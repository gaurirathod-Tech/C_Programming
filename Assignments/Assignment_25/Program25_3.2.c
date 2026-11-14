#include "Program25_3.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description   : Checks whether the given character is a digit
//                  or not.
//  Input         : Character
//  Output        : Returns TRUE if the character is a digit,
//                  otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}