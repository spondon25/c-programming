#include<stdio.h>
int main()
{
    int i, result=1, j=3;

    for(i=1;i<=4;i++){
        result*=j;
    }
    printf("3 to the power 4 = %d\n",result);

    return 0;
}
