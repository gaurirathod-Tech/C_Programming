#include "Program27_1.3.h"

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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
