#include<stdio.h>
int main()
{
    int num1, num2, num3, max, min;
    printf("Enter three int number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    max=num1;
    if(max<num2){
        max=num2;
    }
    if(max<num3){
        max=num3;
    }


    min=num1;
    if(min>num2){
        min=num2;
    }
    if(min>num3){
        min=num3;
    }

    printf("Highest value is %d",max);
    printf("Lowest value is %d",min);


    return 0;
}
