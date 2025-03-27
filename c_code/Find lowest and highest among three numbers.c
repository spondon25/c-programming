#include<stdio.h>
int main()
{
    int num1, num2, num3, max, min;

    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    min=num1;
    if(min>num2){
        min=num2;
    }
    if(min>num3){
        min=num3;
    }

    max=num1;
    if(max<num2){
        max=num2;
    }
    if(max<num3){
        max=num3;
    }

    printf("Lowest number is %d\n",min);
    printf("Greatest number is %d",max);

    return 0;
}
