#include<stdio.h>
int main()
{
    int sales, fixed=200;
    float salary;

    printf("Enter sales in dollar (-1 to end):");
    scanf("%d",&sales);

    while(sales!=-1){

        salary = fixed + sales*.09 ;

        printf("The salary is %.2f\n",salary);

        printf("Enter sales in dollar (-1 to end):");
        scanf("%d",&sales);
    }
    return 0;
}
