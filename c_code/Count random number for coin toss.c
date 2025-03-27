#include<stdio.h>
#define RESPONSE_SIZE 5
#define FREQUENCY_SIZE 3

int main()
{
    int answer;
    int rating;
    int frequency[FREQUENCY_SIZE]={0};
    int response[RESPONSE_SIZE]={2,1,2,1,2};

    for (answer=0;answer<RESPONSE_SIZE;answer++){
        ++frequency[response[answer]];
    }

    printf("%s%17\n","Rating","Frequency");

    for (rating=0;rating<FREQUENCY_SIZE;rating++)
    {
        printf("%6d%17d\n",rating+1,frequency[rating]);
    }

    return 0;
}
