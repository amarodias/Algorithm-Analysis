#include <stdio.h>
//By subtractions
int mdcByStubtractions (int a, int b)
{
    while(a!=b)
    {
        if(a > b)
        a = a - b;
    else b = b - a;
    return a;
    }
}
//By the remainder of the division
int mdcByRemainderOfDivison (int a, int b)
{
    int remainder;
    while(b!=0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(int argv, char *  argc[])
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d", mdcByStubtractions(a, b));

        return -1;
    }