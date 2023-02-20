///part 2
///2d matrix multiplication all user input
#include <stdio.h>         //preprocessor command for input output header file
int main ()
{        //beginning of main function
    int a[10][10], b[10][10],result[10][10], r1, c1, r2, c2, i, j, k, sum=0 ;   //declaration of necessary variables and arrays
    printf(" enter the number of rows & columns for matrix A -> ") ;    //prints the massage within double quotation
    scanf("%d %d",&r1,&c1) ;    //for taking the number of rows and columns for the 1st matrix from the user
    printf("\n enter the number of rows & columns for matrix B -> ") ;    //prints the massage within double quotation
    scanf("%d %d",&r2,&c2) ;   //for taking the number of rows and columns for the 2nd matrix from the user

    /*condition is if the number of columns of the 1st matrix is not equals to the
    number of rows of the 2nd matrix then it will show an error massage and again ask
    to enter the number of rows and columns for the 1st and 2nd matrix */
    while(c1!=r2)
    {

        printf("\nERROR !!!column of A matrix is not equal to the row of B matrix\n") ;
        printf("\nenter the number of rows & columns for matrix A -> ") ;
        scanf("%d %d",&r1,&c1) ;
        printf("\nenter the number of rows & columns for matrix B -> ") ;
        scanf("%d %d",&r2,&c2) ;

    }
    ///taking input for a matrix
    printf("\n Enter elements for A matrix\n") ;   //prints the massage within double quotation

    for(i=0; i<r1; i++)              //for loop for the rows of a matrix
    {
        for(j=0; j<c1; j++)             //for loop for the columns of a matrix
        {
            printf("a[%d][%d]= ",i,j);       //for showing the location of each elements in the a matrix
            scanf("%d",&a[i][j]) ;                 //taking user input of each elements of a matrix
        }  //end of for loop for column
    }         //end of for loop for rows
    ///taking input for b matrix
    printf("\n Enter elements for B matrix\n") ;         //prints the massage within double quotation
    for(i=0; i<r2; i++)   //for loop for the rows of b matrix
    {
        for(j=0; j<c2; j++)   //for loop for the columns of b matrix
        {
            printf("b[%d][%d]= ",i,j);    //for showing the location of each elements in the b matrix
            scanf("%d",&b[i][j]) ;         //taking user input of each elements of b matrix
        }//end of for loop for column
    }   //end of for loop for rows
    ///multiplying A & B matrix
    for(i=0; i<r1; i++)    //for loop the number of rows will be equal to the number of rows of the A matrix
   {
        for(j=0; j<c2; j++)   //for loop the number of columns will be equal to the number of columns of the B matrix

        {
            for(k=0; k<c1; k++)   //for k's value we are using a loop which will execute from 0 to the number of columns of the 1st matrix
            {
                sum = sum + a[i][k]*b[k][j];  //equation for multiplication
            }


            result[i][j] = sum;  //will store the multiplication result in result matrix
            sum = 0;   //after that we will again store sum=0
        }
    }

    ///printing a matrix

    printf("\n\n MATRIX A -> \n") ;
    for(i=0; i<r1; i++)          //loop for rows of the 1st matrix
    {
        printf("\n") ;      //new line
        for(j=0; j<c1; j++)    //loop for columns of the 1st matrix
        {
            printf("\t%d ",a[i][j]) ;     //prints the elements of A matrix
        }
    }
    ///printing b matrix

    printf("\n\n MATRIX B -> \n") ;
    for(i=0; i<r2; i++)     //loop for rows of the 2nd matrix
    {
        printf("\n") ;              //new line
        for(j=0; j<c2; j++)    //loop for columns of the 2nd matrix
        {
            printf("\t%d ",b[i][j]) ;      //prints the elements of B matrix
        }
    }
    ///printing result matrix
    printf("\n\nMultiplication Result Matrix ->\n");
    for(i=0; i<r1; i++)  //loop which will execute from 0 to the number of rows of A matrix
    {
        printf("\n");        //new line
        for(j=0; j<c2; j++)     //loop which will execute from 0 to the number of columns of B matrix
        printf("\t%d ",result[i][j]);   //prints the multiplication result

    }


    return 0;   //indicate that program ended


}//ending main function



