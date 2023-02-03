#include<stdio.h>

int main() 
{
    int Pno;
    printf("enter a no");
    scanf("%d", &Pno);
    if (Pno%2==0 || Pno%4==0 || Pno%5==0 || Pno%7==0)
    {
        printf ("\n this not a prime no");
    }
    else
    {
        printf("\n this is a prime no");

    }
    return 0;
}









