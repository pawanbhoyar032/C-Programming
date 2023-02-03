#include <stdio.h>
// with return
int factorial();
int main()
{
    int a, b , c=0, d=0;
    printf("enter no\n");
    scanf("%d", &a);
        c = factorial(a);
    printf("%d\n", c);
    printf("enter no\n");
    scanf("%d", &b);
    d = factorial(b);
    printf("%d", d);
}
int factorial(int pawan)
{
    int result=1;
    for (int i = 1; i <= pawan; i++)
    {
        result = result * i;
    
    }
    return result;
}