#include <stdio.h>
int main ()
{
    int i,j, k, sum=0, r1,c1,r2,c2, a[10][10], b[10][10] ,result[10][10];
    printf("\n enter the number of rows & columns for the first matrix -> ") ;
    scanf("%d %d",&r1,&c1) ;
     printf("\n enter the number of rows & columns for the second matrix -> ") ;
    scanf("%d %d",&r2,&c2) ;

    while(c1!=r2)
    {
        printf("\n ERROR ! ! ! \n number of columns of the 1st matrix & number of rows of the second matrix should be same for multiplication\n\n") ;
         printf("\n enter the number of rows & columns for the first matrix -> ") ;
         scanf("%d %d",&r1,&c1) ;
         printf("\n enter the number of rows & columns for the second matrix -> ") ;
        scanf("%d %d",&r2,&c2) ;

    }
    //first matrix
    printf("\n Enter elements for the first matrix ->\n") ;
    for (i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\n a[%d][%d] = ",i,j) ;
            scanf("%d",&a[i][j]) ;
        }
    }

       //second matrix
       printf("\n Enter elements for the second matrix ->\n") ;
      for(i=0; i<r2; i++)
      {
          for(j=0; j<c2; j++)
          {
              printf("\n b[%d][%d] = ",i,j) ;
              scanf("%d",&b[i][j]) ;
          }
      }
       //multiplication part
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum+ a[i][k]*b[k][j] ;

            }
            result [i][j] = sum ;
            sum = 0 ;
        }
    }
      //printing first matrix
    printf("\n\n FIRST MATRIX ->\n") ;
      for(i=0; i<r1; i++)
      {        printf("\t") ;
          for(j=0; j<c1; j++)
          {
              printf("%d\t",a[i][j]) ;
          }
          printf("\n") ;
      }
      //printing second matrix
      printf("\n\n SECOND MATRIX ->\n") ;
      for(i=0; i<r2; i++)
      {       printf("\t") ;
          for(j=0;j<c2; j++)
          {
              printf("%d\t",b[i][j]) ;
          }
          printf("\n") ;
      }
      printf("\n\n RESULT MATRIX ->\n") ;

          for(i=0;i<r1;i++)
          {
              printf("\t") ;
              for(j=0; j<c2; j++)
              {
                  printf("%d\t",result[i][j]) ;
              }
              printf("\n") ;
          }
}
