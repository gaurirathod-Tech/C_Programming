#include "Program7_1.3.h"

////////////////////////////////////////////////////////////////
//
// Entry point of the application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return EXIT_SUCCESS;
}
