#include<stdio.h>
int main()
{
    int age, counter=0, total=0, mean;

    printf("Enter your age (-1 to end):");
    scanf("%d",&age);

    while(age!=-1){

    total+=age;
    counter++;

    printf("Enter your age (-1 to end):");
    scanf("%d",&age);

    }

    mean=total/counter;
    printf("The mean of age is %d",mean);

    return 0;
}
