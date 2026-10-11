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

int main(int argv, char *  argc[])
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d", mdcByStubtractions(a, b));

        return -1;
    }