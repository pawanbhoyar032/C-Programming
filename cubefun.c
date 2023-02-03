#include <stdio.h>
int cube(int b);
int div(int b); 
int main()

{
    int a, b=0, c=0;
    printf("Enter a no : ");
    scanf("%d", &a);
    b=cube(a);
    c=div(a);
    printf("%d  %d", b,c);
}
int cube(int b)
{
    int a;
    a=b*b*b;
    return a;

}
int div(int b)
{
    int a;
    a=b/b;
    return a;

}