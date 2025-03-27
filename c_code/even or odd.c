#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter any number to check even or odd:");
    scanf("%d",&num);
    if(num%2==0)
    {
    printf("The number is even");
    }
    else
    {
    printf("The number is odd.");
    }
    getch();

}
