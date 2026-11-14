#include "Program24_1.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    char arr[20];

    char cValue;

    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found.");
    }
    else
    {
        printf("Character not Found.");
    }

    return EXIT_SUCCESS;
}








