/*
* @program          :  Leap Year
* @author           :  Pawan Bhoyar
* @description      :  This program elaborate a factorial function
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/

#include<stdio.h>

/*
* @method            :  main
* @description       :  This program elaborate finding of leap year
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

int main()
{
int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) 
   {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0)
   {
    printf("%d is a leap year.", year);
   }
   else
   {
    printf ("%d is not a leap year. ", year);
   }
   return 0;
}
