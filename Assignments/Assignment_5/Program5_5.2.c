#include "Program5_5.3.h"

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckCharacterType
//  Input           :   Character
//  Output          :   None
//  Description     :   Checks the given character and displays whether
                        it is an uppercase alphabet, lowercase alphabet,
                        digit, or special character.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
///////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c -> Uppercase Alphabet", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c -> Lowercase Alphabet", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("%c -> Digit", ch);
    }
    else
    {
        printf("%c -> Special Character", ch);
    }
}



