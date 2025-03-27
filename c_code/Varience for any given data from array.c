#include<stdio.h>
#include<math.h>
int main()
{
    float x[]={};
    int i,n;
    float avg, var, std_dev, sum=0, numa;
    printf("Enter the value of N\n");
    scanf("%d",&n);
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    for(i=0;i<n;i++){
        sum+=x[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        numa+=pow((x[i]-avg),2);
    }
    var=numa/n;
    std_dev=sqrt(var);
    printf("Average of all elements=%.2f\n",avg);
    printf("Varience all elements=%.2f\n",var);
    printf("Std Deviation of all elements=%.2f",std_dev);
}
