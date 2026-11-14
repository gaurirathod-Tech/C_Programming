#include "Program25_1.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Checks whether the given character is an alphabet
//                  or not.
//  Input         : Character
//  Output        : Returns TRUE if the character is an alphabet,
//                  otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if (((ch >= 'a') && (ch <= 'z')) || 
        ((ch >= 'A') && (ch <= 'Z')))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}