#include <stdio.h>

int main()
{
    char sub;
    printf ("enter the specific digit given below for the subjects you have passed:");

    printf ("\n enter 1 if you have passed the both maths  & science ");

    printf ("\n enter 2 if you have  only passed at maths");

    printf ("\n enter whatever you feel like if you have only passed at science \n");

    scanf ("%d", &sub);

    if(sub==1)
    {
      printf ("congrats! since you have passed both of the subjects you will get a gift voucher of tk.45");
    }
  else if (sub==2)
  {
      printf ("you have passed the maths test you will get a tk.15 gift voucher");
  }
  else
  {
      printf ("since you have only passed the science test you will get a gift voucher of tk.15 ");
  }

return 0;
}

