#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays "*" iNo times
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
