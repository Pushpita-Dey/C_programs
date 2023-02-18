#include <stdio.h>
int main()
{
    int a[10], n, i,max ,min ;
    printf("\n How many elements you want to put in the array -> ") ;
    scanf("%d",&n) ;
    printf("\n enter %d array elements :\n",n);
    for(i=0; i<n; i++)
    {
        printf(" a[%d] = ",i) ;
        scanf("%d",&a[i]) ;
    }
    printf("\n array : ") ;
      for(i=0; i<n; i++)
    {
        printf("%d ",a[i]) ;
    }
    max = a[0] ;
    for(i=1; i<n; i++)
    {
        if(max<a[i])
        {
            max = a[i] ;
        }
    }
    min = a[0] ;
    for(i=1; i<n; i++)
    {
        if(min>a[i])
        {
            min = a[i] ;
        }
    }
    printf("\n maximum value of the array is : %d",max) ;
    printf("\n minimum value of the array is : %d",min) ;

}
