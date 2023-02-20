///part 2
///write a program in c, by using loop(s) with sentinel control to get the class avg mark.

#include<stdio.h> //preprocessor command that includes standard input output header file
int main() // main function
{   //beginning of the main function
  int mark,std_q=0,total=0; //variable declaration (integer type)
  float avg; //declaration of a floating type variable
  printf("\n enter a mark[enter '-1'if you don't have any marks]: ") ; //prints the string of characters within quotes("")
  scanf("%d",&mark); //takes a mark from the user & %d means decimal integer will be printed
  while(mark!=-1) //condition for the while loop
  { //beginning of while loop
      total=total+mark; //assignment of total.
      std_q= std_q+1;   //assignment of student quantity.

      printf("\n enter a mark[enter '-1'if you don't have any marks]: ") ; //prints the string of characters within quotes("")
      scanf("%d",&mark); //takes marks from the user.

  }//ending of while loop
  if(std_q!=0) //condition for the if statement: if student quantity is not equals to zero
  { //beginning of the if statement
      avg=(float)total/std_q; //assignment of average
      printf("\n the avg of the class is :%.2f",avg); //prints the average of students of the class
  }//ending of the if statement
  else // if given condition does not fit into the if statement then go to else
    {//beginning of else structure
    printf("\n as you did not enter any mark(s) no avg is available");//prints as you did not enter any marks no avg is available
    }//ending of else structure
  return 0;//indicate that the program ended successfully
}//ending of the main function
