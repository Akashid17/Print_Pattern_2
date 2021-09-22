
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}