///part2
///write a program to find out upper case or lower case of English alphabets by using operators.
#include<stdio.h> //preprocessor command for input output header file
int main()    //main function
{
    //beginning of main function
    char ch;     //declaration of a character type variable
    printf("\n enter an English alphabet to identify if it is capital or small: ");    //prints the message within quotes(" ")
    scanf("%c",&ch);      //takes a character input from user

    if(ch>='A'&&ch<='Z')    //condition for if statement
        printf("\n the %c is an upper case",ch);    //prints that given alphabet is an upper case

    else if(ch>='a'&&ch<='z')   //condition for else if statement
        printf("\n the %c is a lower case",ch);    //prints that given alphabet is a lower case

    else      //beginning of  else statement, if received character does not match any of the above conditions
    {
        printf("\n you are out of range");  //prints you are out of range.
    } //ending of else statement

    return 0; //indicate that program ended

}  //ending main function
