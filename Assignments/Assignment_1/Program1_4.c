#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Input           :   None
//  Output          :   Integer (TRUE or FALSE)
//  Description     :   Checks whether the given number is divisible by 5.
                        Returns TRUE if divisible by 5, otherwise returns FALSE.
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////////////////////////////

int Check(int iNo)
{
    if((iNo % 5) ==0 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
         printf("Not Divisible by 5\n");
    }
}
