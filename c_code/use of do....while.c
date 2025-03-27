#include<stdio.h>
int main()
{
    int num, sum=0;
printf("Enter the number:");
    scanf("%d",&num);
    do{

    sum+=num;
    }
    while(num!=-1);

    printf("Sum=%d\n",sum);

    return 0;
}
