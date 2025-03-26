#include<stdio.h>
int main()
{
    int i=1,mark,pass=0,fail=0;

     printf("Enter the mark:");

    while(i<=10){
        scanf("%d",&mark);

        if(mark>=60){
            pass++;
        }
        else{fail++;}
        i++;
    }
     printf("Passed:%d\n",pass);
      printf("Failed:%d",fail);

 return 0;
}
