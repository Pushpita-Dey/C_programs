///the row - column values of a matrix are kept in the column - row values of another matrix
#include <stdio.h>
int main ()
{
    int a[10][10], transpose[10][10] ,i, j, r, c ;
    printf("\n enter row and column for matrix -> ") ;
    scanf("%d %d",&r,&c) ;
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d] = ",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }
    printf("\n entered matrix :\n") ;
    for (i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]) ;
        }
        printf("\n") ;
    }
    //transpose  matrix
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            transpose[j][i] = a[i][j] ;
        }
    }
    printf("\n transposed matrix->\n") ;
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d\t",transpose[i][j]) ;
        }
        printf("\n") ;
    }

}
