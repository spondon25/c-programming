#include<stdio.h>
int square(int x)
{
    return x*x;
}
int main()
{
    int x;
    for(x=1;x<=10;x++){
    printf("%d\n",square(x));
    }

    return 0;
}
