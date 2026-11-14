#include "Program23_5.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}