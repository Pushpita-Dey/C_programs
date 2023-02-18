#include <stdio.h>
int main()
{
    int a1[20], a2[30],i,n ;

    printf("\n How many elements you wanna enter in the array : ") ;
    scanf("%d",&n) ;
    for(i=0; i<n; i++)
    {
        printf(" a1[%d] = ",i) ;
        scanf("%d",&a1[i]) ;  //taking user input of elements
    }
    //printing array 1
    printf("\n array 1 : ") ;
    for(i=0; i<n; i++)
    {
        printf("%d ",a1[i]) ;
    }
    //copying all the elements from array 1
    for(i=0; i<n; i++)
    {
        a2[i] = a1[i] ;
    }
     //printing array 2
     printf("\n array 2 : ") ;
     for(i=0; i<n; i++)
     {
         printf("%d ",a2[i]) ;
     }
getch () ;
}
