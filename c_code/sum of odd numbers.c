#include<stdio.h>
#include<conio.h>
void main()
{   int c,n;
    float s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(c=1;c<=n;c+=2){
    s=s+c;
    }
    printf("the result is %f",s);
    //getch();

}
