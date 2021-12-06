#include"mymath.h"
#include<stdio.h>

int main()
{
    int x = 5;
    int y =2;
    printf("%d power %d is %ld\n", x, y, MyPower(x,y));
    printf("%d factorial is %ld\n", x, MyFactorial(x));
    printf("%d is %0.2f%% of %d\n", y, MyPercentage(y, x), x);
    return 0;
}
