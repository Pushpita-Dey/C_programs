///part1
///write a program using while loop to get the class average mark of a subject.

#include<stdio.h> // including header file
int main() //including main function
{
    //starting main function
    int mark,std_q=1,total=0; //declaration of variables
    float avg; //declaration of variable
    while(std_q<=7) //condition of while loop
    {
        //starting while loop
        printf("\n enter the mark for the current student: "); //prints enter the mark for the current student
        scanf("%d",&mark);//take mark from the user
        total=total+mark; //assignment of total
        std_q = std_q+1; //assignment of student quantity
    }//ending while loop
    avg = (float)total/(std_q-1); //assignment of average
    printf("\n the class average is: %.2f",avg); //prints class average

    return 0; //indicate that program ended successfully
}//ending main function
