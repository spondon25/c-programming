#include<stdio.h>
int main()
{
    int i, n, num, sum=0;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter numbers:");

     for (i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
     }

  printf("Sum is %d",sum);

 return 0;
}
