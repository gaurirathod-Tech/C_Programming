#include "Program27_2.3.h"

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description   : Counts the number of small letters present in
//                  the given string by checking each character
//                  between 'a' and 'z'
//  Input         : String
//  Output        : Returns the count of small letters present
//                  in the given string.
//  Date          : 14/11/2026
//  Author        : Gauri Prakash Rathod
//
//////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a')  && (*str <= 'z')) 
            {
                iCount++;
            }   
            str++; 
    }
    
    return iCount;
}
