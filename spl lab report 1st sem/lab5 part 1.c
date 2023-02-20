//write a program in the c programming language to count total of each letter grades by using while &  switch-case-break

#include<stdio.h>     //preprocessor command that includes standard input output header file
int main()  //main function
{
    //starting main function
    int grade ;   ///variable grade declaration
    int aCount=0,bCount=0,cCount=0,dCount=0,eCount=0,fCount=0;    //initialization part
    printf("enter the letter grades [enter 'Q'to end]:\n") ;      //prints the message (Q is a sentinel value)
    while((grade=getchar())!='Q')                   //condition for the while loop
    {
        switch(grade)                     //switch nested in while
        {
        case 'A':
        case'a':   //grade was uppercase A or lowercase a
            aCount++;         //a count increment by 1
            break;
        case'B':
        case'b':      //grade was uppercase B or lowercase a
            bCount++;      //b count increment by 1
            break;
        case'C':
        case'c':      //grade was uppercase C or lowercase c
            cCount++;       //c count increment by 1
            break;
        case'D':
        case'd':      //grade was uppercase D or lowercase d
            dCount++;     //d count increment by 1
            break;
        case'E':
        case'e':      //grade was uppercase E or lowercase e
            eCount++;             //e count increment by 1
            break;
        case'F':
        case'f':      //grade was uppercase F or lowercase f
            fCount++;      //f count increment by 1
            break;
        case'\n':
        case' ':       //ignore these input
            break;
        default:                  //catch all other characters
        {
            printf("incorrect letter grade entered.\n");      //prints the message
            printf("enter a new grade.\n");                  //prints the message
        }
        break;

        }
    }
    printf("\n totals for each letter grades are ->\n");           //counting
    printf(" A:%d\n",aCount);     //counts total A & prints
    printf(" B:%d\n",bCount);        //counts total B & prints
    printf(" C:%d\n",cCount);         //counts total C & prints
    printf(" D:%d\n",dCount);        //counts total D & prints
    printf(" E:%d\n",eCount);       //counts total E & prints
    printf(" F:%d\n",fCount);         //counts total F & prints
    return 0;                              //indicate that program ended
}                                     //ending main function


