#include "Program15_2.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Number : \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller"); 
    }

    return EXIT_SUCCESS;
}