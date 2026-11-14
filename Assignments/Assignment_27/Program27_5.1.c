#include "Program27_5.3.h"

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

    Reverse(arr);

    printf("Reversed string is %s\n", arr);

    return EXIT_SUCCESS;
}