#include<stdio.h>

long int MyPower(int x, int y)
{

    int z = x, i;

    for(i = 1; i < y; i++)
    {
        z = z*x;
    }

    return z;

}

long int MyFactorial(int x)
{
    int i = 1;
    long int result = 1;

    while(i < x)
    {
        i++;
        result *= i;
    }
    return result;

float MyPercentage(int x, int y)
{
    return ((float)(x) * 100) / (float)(y);
}
