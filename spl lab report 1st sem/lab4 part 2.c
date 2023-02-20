//write a program in the programming language C to use do while and for loop together in a solution
#include <stdio.h>      //preprocessor command for input output header file
int main()   //main function
{         //beginning of main function
    int n,i,sum = 0;     //declaring and initializing variables
    do
    {            //beginning of do
        printf(" Enter a positive integer: ") ;  //prints enter a positive integer
        scanf(" %d",&n) ;   //take the value of n from user
    }       //ending do part
    while (n<=0);     //condition of while
    for(i=1; i<=n; i++)      //for loop (initialization; condition; increment)
    {   //beginning of for loop
        sum = sum+i;     //assignment of sum
    }    //ending for lop
    printf(" sum = %d", sum);    //prints the value of sum
    return 0; //indicate that program ended successfully

}    //ending main function
