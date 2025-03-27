#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   srand(time(NULL));
    int i, j;
    int co[7]={0};

    for (i=1;i<=6000;i++){
        j=1+rand()%6;
        co[j]++;
    }

    printf("%s%17s\n","Rating","Frequency");

    for (j=1;j<=6;j++)
    {
    printf("%6d%17d\n",j,co[j]);
    }

    return 0;
}

