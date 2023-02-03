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
// with no return
void factorial();

/*
* @method            :  main
* @description       :  This method elaborate to initialize a number
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

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

/*
* @method            :  factorial
* @description       :  This method elaborate factor of number
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  void
*/

void factorial(int pawan)
{
    int result = 1;
    for (int i = 1; i <= pawan; i++)
    {
        result = result * i;
    }
    printf("%d\n", result);
}