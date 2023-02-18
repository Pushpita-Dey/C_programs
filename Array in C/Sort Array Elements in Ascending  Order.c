#include <stdio.h>
int main ()
{
    int a[10] ,i,j,n,temp=0 ;
    printf("how many elements : ") ;
    scanf("%d",&n) ;
    printf("enter %d array elements : ",n) ;
    for(i=0; i<n; i++)
    scanf("%d",&a[i]) ;
    // for ascending order
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i] ;
                a[i] = a[j] ;
                a[j] =temp ;
            }
        }
    }



    printf("\n Ascending Order : ") ;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]) ;
    }






    return 0;
}
