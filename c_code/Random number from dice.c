#include<stdio.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int result;
    result=rand()%6+1;
    printf("The number you have get is %d",result);

    return 0;
}
