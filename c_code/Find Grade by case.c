#include<stdio.h>
int main()
{

     char grade;
     printf("Enter your Grade:");
     scanf("%c",&grade);

     switch(grade){
     case 'A':
     case 'a':
         printf("Excellent");
         break;

     case 'B':
     case 'b':
     case 'C':
     case 'c':
         printf("Good\n");
         break;

     case 'D':
     case 'd':

         printf("Improvement needed\n");
         break;

         case 'F':
     case 'f':

         printf("Fail\n");
         break;

        default:
        printf("Invalid grade\n") ;
     }

     printf("Your grade is %c",grade);

 return 0;

}
