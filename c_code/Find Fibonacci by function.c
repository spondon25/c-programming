#include<stdio.h>
int fib (int n)
{
    if(n==1){return 0;}
    if(n==2){return 1;}

    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);

    int fibN=fibNm1+fibNm2;

    return fibN;

}

int main(void)
{
    int x;
    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Fibonacci is %d",fib(x));

    return 0;
}
