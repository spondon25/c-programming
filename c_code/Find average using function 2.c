#include<stdio.h>
float average(int sum, int n);

int main()
{
    float sum=0,value,avg;
    int i,num;

    printf("How many data in data in your data set:");
    scanf("%d",&num);
    printf("Enter the values");
    for(i=1;i<=num;i++){
        scanf("%f",&value);
        sum+=value;
        }
    avg=average(sum,num);
     printf("The average of dataset 1: %.2f\n",avg);
     printf("Sum is %d",sum);

     return 0;
}

float average(int sum, int n)
{
    float ave;
    ave=(float)sum/n;
    return ave;
}
