#include <stdio.h>
int main ()
{
    int num[] = {1,3,5,7,9} ;
    int i, value ;
    int position = -1 ;

printf("\n num array : ") ;
for(i=0; i<5; i++)
{
    printf("%d ",num[i]) ;
}
    printf("\n enter the value you wanna search : ") ;
    scanf("%d",&value) ;
    for (i=0; i<5; i++)
    {
        if(value == num[i])
        {
            position = i+1 ;
            break ;
        }
    }
    if(position == -1)
        printf("\n NOT FOUND") ;

    else
    {
        printf("\n the element %d is on the no.%d position",value,position) ;
    }
}
