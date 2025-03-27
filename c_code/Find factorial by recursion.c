#include<stdio.h>
long fact(int n)
{
    if(n>1){ return n*fact(n-1); }
    else {return 1;}
}

int main()
{
    int factor, i;
    printf("Enter number:");
    scanf("%d",&i);

    factor=fact(i);
    printf("Factorial is %d",factor);

    return 0;
}
