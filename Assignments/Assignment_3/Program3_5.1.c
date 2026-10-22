#include "Program_5.3.h"

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel.\n");
    }
    else
    {
       printf("It is not Vowel.\n"); 
    }

    return EXIT_SUCCESS;
}