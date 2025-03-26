#include <stdio.h>
int main()
{
  int sum=0, z=5;

  while(z>=0){

    sum+=z;
    //printf("z=%d,sum=%d\n",z,sum);

    z--;
    printf("z=%d,sum=%d\n",z,sum);
  }
  return 0;
}
