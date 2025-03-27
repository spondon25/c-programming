#include<stdio.h>
float varience(float x[], int n)
{
    int i;
    float sum, mean, nume, var;
    for(i=1;i<n;i++){
        sum+=x[i];
    }
    mean=sum/n;

    for(i=1;i<n;i++){
        nume+=(x[i]-mean)*(x[i]-mean);
    }
    var=nume/(n-1);
    return var;
}

int main()
{
    float dataset1[4]={12.5, 7.2, 8.3, 9.4};
    float dataset2[5]={104.1, 96.4, 70.8, 83.2, 110.5};

    printf("Varience of set 1 is %.2f\n",varience(dataset1,4));
    printf("Varience of set 2 is %.2f\n",varience(dataset2,5));

}
