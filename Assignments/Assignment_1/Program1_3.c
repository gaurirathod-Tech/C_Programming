#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Displays numbers from 5 to 1
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
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
    EXIT_SUCCESS;
}
