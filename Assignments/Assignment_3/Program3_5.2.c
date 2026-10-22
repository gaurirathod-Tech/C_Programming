#include "Program_5.3.h"

typedef int BOOL;

#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Input           :   Integer
//  Output          :   Integer (TRUE / FALSE)
//  Description     :   Checks whether the given character
//                      is a vowel (a, e, i, o, u) or not.
//                      Returns TRUE if the character is a
//                      vowel.Otherwise, returns FALSE.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

BOOL ChkVowel(int cValue)
{
    if((cValue == 'a') || (cValue == 'e') ||
       (cValue == 'i') || (cValue == 'o') ||
       (cValue == 'u') || (cValue == 'A') ||
       (cValue == 'E') || (cValue == 'I') ||
       (cValue == 'O') || (cValue == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}