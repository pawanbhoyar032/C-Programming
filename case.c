/*
* @program          :  case
* @author           :  Pawan Bhoyar
* @description      :  This program contains switch case code
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/
#include <stdio.h>

/*
* @method            :  main
* @description       :  This method contains switch case example
* @created date      :  03-Feb-2023
* @params            :  none
* @return            :  int
*/

int main()
{
  int inum;
  printf("\n 1- Marathi \n 2- Hindi \n 3- English : ");
  printf("\nEnter Your Choice");
  scanf("%d", &inum);

switch (inum)
{
  case 1 :
  printf("\nYou Selected Marathi.");
  break;

  case 2 :
  printf("\nYou Selected Hindi.");
  break;

  case 3 :
  printf("\nYou Selected English.");
  break;

  default:
      printf("\nIncorrect Choice!");
  break;
  }

  return 0;
}