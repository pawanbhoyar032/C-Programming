
/*
* @program          :  cube
* @author           :  Pawan Bhoyar
* @description      :  This program contains function code
* @created date     :   03-Feb-2023
* @modification log
*  1. Pawan Bhoyar  :   Class created 03-Feb-2023
*  2. Pawan Bhoyar  :   Comments added 03-Feb-2023
*/
#include <stdio.h>

/*
* @method            :  main
* @description       :  This method elaboorate logic of cube and division of a number
* @created date      :  03-Feb-2023
* @params            :  int variable
* @return            :  int
*/

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
/*
* @method            :  cube
* @description       :  This method contain logic of cration cube of a number
* @created date      :  03-Feb-2023
* @params            :  int variable
* @return            :  int
*/

int cube(int b)
{
    int a;
    a=b*b*b;
    return a;

}
/*
* @method            :  division
* @description       :  This method contains to create a logice divide a number
* @created date      :  03-Feb-2023
* @params            :  int variable
* @return            :  int
*/

int div(int b)
{
    int a;
    a=b/b;
    return a;

}