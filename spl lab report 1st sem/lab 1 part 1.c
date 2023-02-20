/*imagine that you have 5 courses, so you have 5 different marks after examination to input. write a program
in C language, to show a list of later grades on the output */
#include<stdio.h>                       //preprocessor command that includes standard input output header file
int main()                                 //function main begins program execution
{
int courses=5;                       /*initialization phrase*/
int marks,lg_A=0,lg_B,lg_C=0,lg_D=0,lg_F=0;

  while(courses>0)              //condition of while loop
  {                                       //beginning of while loop

    printf("\n enter the marks of the course: ");                    //prints the message within quotes
    scanf("\n%d",&marks);                                                   //takes the input of marks from the user

    if(marks>=80&&marks<90)                                         //condition of if statement
    {                                                                               // beginning of the if statement
        lg_A++;                                                               //increment of letter grade A by 1
        printf(" grade A\n");                                        // prints grade A
    }  //ending of if statement
    else if(marks>=70&&marks<80) //if given marks does not fit into the range of if statement then go to else if and check
    { //beginning of the else if statement
        lg_B++; //increment of letter grade B by 1
        printf(" grade B\n"); //prints grade B
    } //ending of else if structure
    else if(marks>=60&&marks<70) //if given marks does not fit into the marks range of else if then check this range
    { //beginning of the else if statement
        lg_C++; //increment of letter grade C by 1
        printf(" grade C\n"); //prints grade C
    } //ending of this else if structure
    else if(marks>=50&&marks<60) //if given marks are in between the marks range of higher than or equal to 50 and less than 60
    { //beginning of this else if statement
        lg_D++; //increment of letter grade D by 1
        printf(" grade D\n "); //prints grade D
    } //ending of this else if structure
    else if(marks<50) //if given marks are less than 50 then check this range
    { //beginning of this else if statement
        lg_F++; //increment of letter grade F by 1
        printf(" grade F\n"); //prints grade F
    } //ending of this else if structure
    else {//beginning of the else structure
        printf(" grade A+\n"); //prints grade A+
         } //ending of else structure
courses--; //decrement of variable courses
  } //ending of the while loop
  return 0; //indicate that program ended successfully
}//ending main function

