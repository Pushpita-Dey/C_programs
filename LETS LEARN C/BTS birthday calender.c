#include <stdio.h>
int main()
{
    int month;
    printf ("enter month number to get BTS members birthday \n");
    scanf("%d",&month);

    switch(month)
    {
       case 2:
           printf("you entered 2 ,which is February \n");
           printf(" 18th February is Hobi day ");
           break;

       case 3:
           printf("March, it's yoongi's birthday month \n");
           printf(" 9th march is Yoongi day") ;
           break;

       case 9:
           printf("September, it's our leaders & maknae's birthday month \n ");
           printf("%d th sept is the birthday of our leader\n %d th sept is the birthday of our maknae ",12,1);
           break;

       case 10:
           printf(" October, it's our mochi's birthday month ");
           printf(" 13th Oct! Is the birthday of our beloved jiminie" );
           break;

       case 12:
           printf(" December, it's our jinu & taehyungee's birthday month \n ");
           printf(" %dth December is the birthday of our jinu \n %dth december  is the birthday of our taehyungee ",4,30);
           break;

       default:
           printf(" it's not a birthday month of any BTS members");

    }

}
