/*
* @program          :  Function
* @author           :  Pawan Bhoyar
* @description      :  This program elaborate a factorial function
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/

#include <stdio.h>
// with return
int factorial();

/*
* @method            :  main
* @description       :  This program elaborate a factorial function
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

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

/*
* @method            :  fatorial
* @description       :  This method elaborate to initialize a number
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

int factorial(int pawan)
{
    int result=1;
    for (int i = 1; i <= pawan; i++)
    {
        result = result * i;
    
    }
    return result;
}