#include <stdio.h>

int main()
{
    int i=1,num,sum=0;
    float avg;

    printf("Enter the numbers:");
    while(i<=10){
            scanf("%d",&num);
        sum+=num;
    i++;
    }
    avg=sum/10;

    printf("Average is %f",avg);

    return 0;
}
