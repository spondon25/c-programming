#include<stdio.h>
int main()
{
     int pass=0, fail=0, i;
     char grade;
     for(i=1;i<=10;i++)
      {
        printf("Enter your grade:");
        scanf("%c",&grade);
        //getchar();

        if(grade=='F' || grade=='f'){
            fail++;
        }
        else{pass++;}
        }

         printf("Total pass=%d",pass);
         printf("Total fail=%d",fail);

        return 0;

}
