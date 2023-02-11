#include  <stdio.h>
int main()
{
    int a ,b ,n ;
    printf("\n enter the value of n -> ") ;
    scanf("%d",&n) ;
    printf("\n") ;

    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf(" *") ;
        }
        printf("\n") ;
    }

}
