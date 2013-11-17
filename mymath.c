#include<stdio.h>

long int MyPower(int x, int y)
{

    int z=x, i;

    for(i = 1; i < y; i++)
    {
        z = z*x;
    }

    return z;

}

float MyPercentage(int x, int y)
{
    return ((float)(x) * 100) / (float)(y);
}
