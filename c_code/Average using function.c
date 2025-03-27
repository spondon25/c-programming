#include<stdio.h>

float avg(int x,int y,int z)
{
    int sum=x+y+z;
    float ave = sum/3;
    return ave;
}

int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);

    printf("Average is %f",avg(a,b,c));

    return 0;
}
