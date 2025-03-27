#include<stdio.h>
float average(void){
    float sum=0,value,avg;
    int i,num;

    printf("How many data in data in your data set:");
    scanf("%d",&num);
    printf("Enter the values");
    for(i=1;i<=num;i++){
        scanf("%f",&value);
        sum+=value;
        }
    avg=sum/num;
    return avg;
}

int main()
{
    printf("The average of dataset 1: %.2f\n",average());
    printf("The average of dataset 2: %.2f",average());

    return 0;
}

