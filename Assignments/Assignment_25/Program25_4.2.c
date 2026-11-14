#include "Program25_4.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description   : Checks whether the given character is a lowercase
//                  alphabet or not.
//  Input         : Character
//  Output        : Returns TRUE if the character is a lowercase
//                  alphabet, otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}