#include "Program27_1.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Counts the number of capital letters present in
//                  the given string by checking each character
//                  between 'A' and 'Z'
//  Input         : String
//  Output        : Returns the count of capital letters present
//                  in the given string.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')  && (*str <= 'Z')) 
            {
                iCount++;
            }   
            str++; 
    }
    
    return iCount;
}
