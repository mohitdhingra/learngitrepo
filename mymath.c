#include<stdio.h>

long int MyPower(int x, int y)
{

<<<<<<< HEAD
    int z = x, i;
=======
    int z=x, i;
>>>>>>> arithmetic

    for(i = 1; i < y; i++)
    {
        z = z*x;
    }

    return z;

}

<<<<<<< HEAD
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
=======
float MyPercentage(int x, int y)
{
    return ((float)(x) * 100) / (float)(y);
>>>>>>> arithmetic
}
