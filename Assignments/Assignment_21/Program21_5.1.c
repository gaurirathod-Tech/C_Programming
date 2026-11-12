#include "Program21_5.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}