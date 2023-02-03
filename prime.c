/*
* @program          :  Prime
* @author           :  Pawan Bhoyar
* @description      :  This program elaborate Finding pprime number
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/

#include<stdio.h>

/*
* @method            :  main
* @description       :  This program elaborate finding prime number
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

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









