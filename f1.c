#include <stdio.h>
// with no return
void factorial();
int main()
{
    int a, b;
    printf("enter no\n");
    scanf("%d", &a);
    factorial(a);
    printf("enter no\n");
    scanf("%d", &b);
    factorial(b);
}
void factorial(int pawan)
{
    int result = 1;
    for (int i = 1; i <= pawan; i++)
    {
        result = result * i;
    }
    printf("%d\n", result);
}