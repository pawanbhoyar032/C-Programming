/*
* @program          :  even number
* @author           :  Pawan Bhoyar
* @description      :  This program elaborate find even numbers between 1-20
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/

#include <stdio.h>

/*
* @method            :  main
* @description       :  This method elaborate finding an even numbers between 1-20
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/


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