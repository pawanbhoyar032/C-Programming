#include <stdio.h>

int main()
{
    int i;
    printf("\nEven numbers 1-20.");
    for (i = 1; i <= 20; i++)
    {
        if (i%2==0)
        {
        printf("\n%d", i);
        }
    }
    return 0;
    
}