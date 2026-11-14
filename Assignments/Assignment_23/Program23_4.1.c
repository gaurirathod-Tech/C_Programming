#include "Program23_4.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}