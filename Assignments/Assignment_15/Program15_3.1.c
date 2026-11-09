#include "Program15_3.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Two Numbers : \n");
    scanf("%d  %d", &iValue1 , &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal"); 
    }

    return EXIT_SUCCESS;
}