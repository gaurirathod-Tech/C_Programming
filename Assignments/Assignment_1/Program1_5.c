#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Input           :   Integer
//  Output          :   None
//  Description     :   Displays "*" iNo times
//  Date            :   22/10/2026
//  Author          :   Gauri Prakash Rathod
//
/////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        printf(" * \n");
    }
}

/////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
/////////////////////////////////////////////////////////

int main()
{

    int iValue =0;
    iValue = 5;
   
    Accept(iValue);

    return EXIT_SUCCESS;
}
