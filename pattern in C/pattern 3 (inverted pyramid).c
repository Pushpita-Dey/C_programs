#include<stdio.h>
int main()
{
    int a, b, r ;
/*    for(a=1; a<=5; a++)
    {
        for(b=5;b>=a; b--)
        {
            printf(" *") ;
        }
        printf("\n") ;
    }
}*/
printf("enter the number of rows -> ") ;
scanf("%d",&r) ;
for(a=r; a>=1; a--)
{
    for(b=1;b<=a ;b++)
    {
        printf(" *") ;
    }
    printf("\n") ;
}
}
