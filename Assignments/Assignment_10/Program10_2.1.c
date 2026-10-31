#include "Program10_2.3.h"

//////////////////////////////////////////
//
// Entry point of the application
//
//////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Width : \n");
    scanf("%f",&fValue1);

    printf("Enter the Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of a Rectangle is %lf.\n", dRet);

    return EXIT_SUCCESS;
}