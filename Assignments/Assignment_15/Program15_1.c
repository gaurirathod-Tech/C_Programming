#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    
    printf("Please Enter Your Full Name : ");
    scanf("%[^'\n']s", Name);  

    printf("Your Name is : %s\n", Name);
   
    return EXIT_SUCCESS;
}
