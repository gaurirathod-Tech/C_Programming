#include "Program23_2.3.h"

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

    struprx(arr);

    printf("Modified String is %s",arr);

    return EXIT_SUCCESS;
}