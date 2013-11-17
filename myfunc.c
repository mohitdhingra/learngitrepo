#include"mymath.h"
#include<stdio.h>

int main()
{
    int x = 5, y =2;
    printf("%d power %d is %ld\n", x, y, MyPower(x,y));
    printf("%d factorial is %ld\n", x, MyFactorial(x));
    return 0;
}
