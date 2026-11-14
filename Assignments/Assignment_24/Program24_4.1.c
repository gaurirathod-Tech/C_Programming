#include "Program24_4.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    char arr[20];

    char cValue;

    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr, cValue);

    printf("Character Location is %d ",iRet);
    
    return EXIT_SUCCESS;
}