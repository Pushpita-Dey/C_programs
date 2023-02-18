 #include <stdio.h>
 int main()
 {
     int r, c, i, j ;
     int a[10][10], b[10][10], sum[10][10] , sub[10][10] ;

     printf("\n Enter the number of row and column for the matrix : ") ;
     scanf("%d %d",&r,&c) ;

     printf(" enter elements for A matrix : \n") ;
     for(i=0; i<r; i++)
     {
         for(j=0; j<c; j++)
         {
             printf(" a[%d][%d] = ",i,j) ;
             scanf("%d",&a[i][j]) ;
         }
         printf("\n") ;
     }
     printf(" enter elements for B matrix : \n") ;
     for(i=0; i<r; i++)
     {
         for(j=0; j<c; j++)
         {
             printf(" b[%d][%d] = ",i,j) ;
             scanf("%d",&b[i][j]) ;
         }
         printf("\n") ;
     }
//calculating addition
         for (i=0; i<r; i++)
         {
             for(j=0; j<c; j++)
             {
                 sum[i][j] = a[i][j] + b[i][j] ;
             }
         }
         //calculating subtraction
         for (i=0; i<r; i++)
         {
             for(j=0; j<c; j++)
             {
                 sub[i][j] = a[i][j] - b[i][j] ;
             }
         }

     printf("\n A matrix : \n") ;
     for(i=0; i<r; i++)
     {
         printf("\t") ;
         for(j=0; j<c; j++)
         {
             printf("%d\t",a[i][j]) ;
         }
         printf("\n") ;
     }
      printf("\n B matrix : \n") ;
     for(i=0; i<r; i++)
     {
         printf("\t") ;
         for(j=0; j<c; j++)
         {
             printf("%d\t",b[i][j]) ;
         }
         printf("\n") ;
     }
     printf("\n Addition of A & B matrix : \n\n") ;
     for(i=0; i<r; i++)
     {
         printf("\t") ;
         for(j=0; j<c; j++)
         {
             printf("%d\t",sum[i][j]) ;
         }
         printf("\n") ;
     }
     printf("\n Subtraction of A & B matrix : \n\n") ;
     for(i=0; i<r; i++)
     {
         printf("\t") ;
         for(j=0; j<c; j++)
         {
             printf("%d\t",sub[i][j]) ;
         }
         printf("\n") ;
     }
 }
