#include "Program26_4.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description   : Checks whether the given character is one of the
//                  specified special characters.
//  Input         : Character
//  Output        :  Returns TRUE if the character is a special character,
//                  otherwise returns FALSE.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if ((ch == '!') || (ch == '@') || (ch == '#') ||
        (ch == '$') || (ch == '%') || (ch == '^') ||
        (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}