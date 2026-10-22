#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

/////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Input           :   Integers
//  Output          :   Boolean
//  Description     :   Checks whether the given number
//                      is Even or Odd
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

BOOL ChkEven(
                int iNo           
            )
{
    if((iNo % 2) == 0)           // Business Logic
    {
        printf("%d is Even.", iNo);
    }
    else
    {
        printf("%d is Odd.", iNo);
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
    BOOL bReT = FALSE;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bReT = ChkEven(iValue);

    return EXIT_SUCCESS;
}
