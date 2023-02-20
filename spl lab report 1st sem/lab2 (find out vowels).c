
///write a program to find out VOWELS (upper case or lower case)
#include <stdio.h>  //preprocessor command for input output header file
int main()          //main function
{       //beginning of main function
    char ch;  //declaration of a character type variable

    printf("\n enter an alphabet to identify if it is a VOWEL or consonant: "); //prints the message within quotes("")
    scanf("%c",&ch);    //takes a character input from user

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') //condition for if statement
        printf("\n it's a vowel");    //prints its a VOWEL
    else    { //beginning of  else statement, if received character does not match any of the above conditions
    printf(" %c is not a vowel, it's a consonant",ch);   //prints its not a vowel its a consonant
       }
         //ending of  else statement
return 0; //indicate that program ended


}   //ending main function
