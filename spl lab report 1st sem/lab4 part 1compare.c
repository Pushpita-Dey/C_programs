//write a program in C language, to use & compare two different loops "while and for"

#include<stdio.h> //preprocessor command for input output header file
int main() //main function
{   //beginning of main function
    int n;    //declaring n variable
    for(n=2; n<11; n+=2){  //beginning of for loop(initialization; condition; increment)
    printf(" %d\n",n);    //printing the value of n after each iteration
    }     //ending for loop
    return 0;     //indicate that program ended

}  //ending main function
