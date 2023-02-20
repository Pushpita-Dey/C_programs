///part 3
///sum 0f any 2 tables of a 3d array output in a 2d array
#include <stdio.h>       //preprocessor command for input output header file
int main()
{                        //beginning of main function
    int table, row, col;    //declaration of necessary integer type variables
    int t , i , j ;
    printf(" Enter table, row and column of 3d array -> ");    //prints the message within double quotation
    scanf("%d %d %d", &table, &row, &col);     //for taking the number of table rows and columns from the user

    int arr[table][row][col];     //declaring a 3d  array

    printf("\nEnter elements in the 3d array ->  \n\n");   //prints the message within double quotation

    for ( t = 0; t < table; t++)     //loop for table which executes from zero to the number of tables the user has taken
    {
        for ( i = 0; i < row; i++)              //loop for rows which executes from zero to the number of rows the user has taken
        {
            for ( j = 0; j < col; j++)                   //loop for column which executes from zero to the number of columns the user has taken
            {
                printf("at [%d][%d][%d]: ",t,i,j);             //for showing the location of each elements of the 3d array
                scanf(" %d", &arr[t][i][j]);                      //taking user input of each elements of the 3d array
            }
        }
    }

    printf("\n 3d array -> \n");    //prints the massage

    for ( t = 0; t < table; t++)       //loop for printing all the tables
    {
        printf("\n Table %d :\n\n", t+1);          //prints each table numbers
        for ( i = 0; i < row; i++)                     //loop for rows of the table
        {
            for ( j = 0; j < col; j++)             //for columns of the tables
                printf("\t%d", arr[t][i][j]);          //prints each element of the tables
            printf("\n");     //new line
        }
         printf("\n");
    }

    int arr_2d[row][col], tab1, tab2;   //declaring necessary array and variables
    printf(" Select any 2 two table from 1-%d -> ", table);   //prints the massage from 1 to the number of tables user has taken
    scanf("%d %d", &tab1, &tab2);     //taking user input for table numbers


    for ( i = 0; i < row; i++)      //loop for rows
            for ( j = 0; j < col; j++)  //loop for column
                arr_2d[i][j] = arr[tab1-1][i][j]+arr[tab2-1][i][j];   //storing the sum in a 2d matrix

   printf("\nTable %d + table %d: \n", tab1, tab2);   //prints the massage
   for ( i = 0; i < row; i++)   // loop for row
        {
            for ( j = 0; j < col; j++)  //loop for column
                printf("\t%d", arr_2d[i][j]);   //prints the results as a 2d array
            printf("\n");   //new line
        }


        return 0 ; //indicate that program ended
}                      //ending main function


