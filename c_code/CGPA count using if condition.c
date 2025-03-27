#include<stdio.h>
int main()
{
    float marks, grade, total_grade=0;
    int sub_code, i;

    for(i=1;i<=10;i++){
        printf("Enter the sub code:");
        scanf("%d",&sub_code);
        printf("Enter the mark:");
        scanf("%f",&marks);

        if(marks>=80 && marks<=100){ grade=4; }
        else if(marks>=75 && marks<=79){ grade=3.75; }
        else if(marks>=70 && marks<=74){ grade=3.50; }
        else if(marks>=65 && marks<=69){ grade=3.25; }
        else if(marks>=60 && marks<=64){ grade=3.00; }
        else if(marks>=55 && marks<=59){ grade=2.75; }
        else if(marks>=50 && marks<=54){ grade=2.50; }
        else if(marks>=45 && marks<=49){ grade=2.25; }
        else if(marks>=40 && marks<=44){ grade=2.00; }
        else { grade=0; }


             if(sub_code==101||sub_code==102||sub_code==105||sub_code==106)  {total_grade+=4*grade;}
              if(sub_code==103||sub_code==104||sub_code==107)  {total_grade+=3*grade;}
                if(sub_code==130||sub_code==131||sub_code==140) {total_grade+=2*grade;}
        }

        float gpa;
        gpa=total_grade/31;
        printf("Your GPA is %f\n",gpa);

        return 0;
}

