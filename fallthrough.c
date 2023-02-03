#include <stdio.h>

int main()
{
    int num=5;
    printf("\n 1- Marathi \n 2- Hindi \n 3- English : ");
    printf("\nEnter Your Choice");
    scanf("%d", &num);
    switch (num)
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
