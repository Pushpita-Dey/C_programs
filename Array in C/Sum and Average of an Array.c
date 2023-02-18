//write a program that read some elements & display sum and avg of those elements
#include <stdio.h>
int main ()
{
    int a[10] ,i,n, sum=0;
    printf("\n enter how many elements : ") ;
    scanf("%d",&n) ;
printf("\nenter %d array elements ->\n",n) ;
    for(i=0;i<n;i++)
    {
        printf(" a[%d] = ",i) ;
        scanf("%d",&a[i]) ;
    }
    //adding the array elements
      for(i=0;i<n;i++)
    {
       sum=sum+a[i] ;
    }
    printf("\n sum of array elements is  : %d\n",sum) ;
     printf("\n average of array elements is  : %.2f",(float)sum/n) ;
}
