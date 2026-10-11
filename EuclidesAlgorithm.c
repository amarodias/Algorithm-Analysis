#include <stdio.h>

//By subtractions
int mdcByStubtractions (int a, int b)
{
    while(a!=b)
    {
        if(a > b)
        a = a - b;
    else b = b - a;
    }
        return a;
}

//By the remainder of the division
int mdcByRemainderOfDivision (int a, int b)
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

//By recursion
int mdcByRecursion(int a, int b)
{
if( b == 0) return a;
return mdcByRecursion(b, a%b);

}
void menu ()
{
    printf("\n=================Algorithm's Euclides====================\n");
    printf("\n====================Choose a method====================\n");
    printf("1 - By Subtractions\n");
    printf("2 - By Remainder Of Division\n");
    printf("3 - By Recursion\n");
}

int main(int argc, char *  argv[])
    {
        int a, b;
        scanf("%d%d", &a, &b);   
        return -1;
    }