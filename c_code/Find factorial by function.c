#include<stdio.h>>
long factorial(int num)
{
    int prod=1,i;
    if(num==0){ return 1;}
    else {
            for(i=num;i>=1;i--){
                prod*=i;
            }
            return prod;
        }
}

int main()
{
    int counter;
    for(counter=0;counter<=10;counter++){
        printf("%ld\n",factorial(counter));
    }
    return 0;
}
