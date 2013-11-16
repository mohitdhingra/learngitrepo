#include<stdio.h>

long int MyPower(int x, int y)
{

    int z, i;

    for(i = 1; i < y; i++)
    {
        z = z*x;
    }

    return z;

}
