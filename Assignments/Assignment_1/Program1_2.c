#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Displays "Marvellous" five times
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for(i = 1; i<= 5; i++)
    {
        printf("Marvellous\n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////////

int main()
{
    Display();

    return EXIT_SUCCESS;
}
