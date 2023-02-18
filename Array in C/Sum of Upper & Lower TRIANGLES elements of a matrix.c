#include <stdio.h>
int main()
{
    int i, j, upper_sum =0 , lower_sum = 0 ;
    int a[3][3] ;
    printf("\nenter the elements of the matrix ->\n") ;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" a[%d][%d] = ",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\n entered matrix ->\n") ;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d",a[i][j]) ;
        }
        printf("\n") ;
    }

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i<j)
                {

                    upper_sum = upper_sum + a[i][j] ;
                }

                if(i>j)
                {

                    lower_sum = lower_sum + a[i][j] ;
                }
            }
        }
        printf("\n sum of upper triangle elements : %d\n",upper_sum) ;
        printf("\n sum of lower triangle elements : %d\n",lower_sum) ;
    }

