#include<stdio.h>
int main()
{
 int age, total=0;
printf("Enter your age (-1 to end):");
 scanf("%d",&age);
 while(age!=-1){

         total+=age;

 }
 printf("The mean of age is %d",total);
 return 0;

}
