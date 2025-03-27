#include<stdio.h>

int max(int x,int y,int z){

   int max;
   max=x;
   if(y>max){max=y;}
   if(z>max){max=z;}

   return max;
}

int main()
{
     int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);

    printf("Maximum is %d",max(a,b,c));

    return 0;
}
