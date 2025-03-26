#include<stdio.h>
int main()
{
    int age, n, i;

    printf("How many people : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){

    printf("Enter age : ");
    scanf("%d",&age);

    if (age>=50){printf("Senior\n");}
    else if (age>=35){printf("Mid-aged\n");}
    else {printf("Junior\n");}

    }

    return 0;
}
