#include <stdio.h>
int main()
{
    int i , j , r ;
    printf("enter the number of rows you wanna print ->") ;
    scanf("%d",&r) ;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",j) ;
        }
        printf("\n") ;
    }
    return 0;
}
