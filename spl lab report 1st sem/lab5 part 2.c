/*write a program in C language, to count total ODD and EVEN numbers by using  switch case break.
(user input)  */

#include <stdio.h>                                                    //preprocessor command for input output header file
int main()                                                               //main function
{                                                                          //starting main function
    int a[100],i,n,even=0,odd=0;                        //initialization part
    printf("Enter size of the array : ");          //prints the massage
    scanf("%d",&n);                                      //takes input from user
    printf("Enter elements in array: ");          //prints the massage
    for(i=0; i<n; i++)                                       //for loop(initialization;condition; increment )
    {                                                                //beginning of for loop
        scanf("%d",&a[i]);                                 //takes the element of a array from the user
    }                                                            //ending of for loop
    for(i=0; i<n; i++)                                    //for loop(initialization;condition; increment )
    {                                                       //beginning of for loop
        switch(a[i]%2)                                   //condition of switch statement    it can be zero or 1
        {                                          //beginning of switch statement
        case 0:                                            //for case zero
            even++;                                         //increment of even by 1
            break;                                         //break statement
        case 1:                                         //for case 1
            odd++;                                             //increment of odd by 1
            break;                                            //break statement
        }                           //ending of switch statement
    }                             //ending of for loop
    printf("\n even numbers in array: %d",even);                  //counts& prints the total even numbers
    printf("\n odd numbers in array: %d",odd);                //counts& prints the total odd numbers
    return 0;                                                 //indicate that program ended
}                          //end of  main function


