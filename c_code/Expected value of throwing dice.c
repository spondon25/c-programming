#include<stdio.h>
float expected_value(void)
{
    float exp=0, x, px=0.167;
    for(x=1;x<=6;x++){
        exp+=x*px;
    }

    return exp;
}

int main()
{
    printf("Expected value is %.2f",expected_value());

    return 0;
}
