///part 1
///count total of each elements in an array

#include <stdio.h>    //preprocessor command for input output header file
int main()
{    //beginning of main function
    int a[100],n,i, sum=0;   //declaration of int type variables

    printf("how many elements you wanna enter in the array: ");   //printing the message
    scanf("%d",&n);     //taking input of the number of elements from user

    printf("\n enter the %d array elements: ",n);   //prints the massage
    for(i=0;i<n;i++)     //for loop for taking user input of the array elements
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)     //for loop for summation of the array elements
    {
        sum=sum+a[i];
    }
    printf("\n the sum of the elements of the array  is -> %d ",sum);  //prints the result



    return 0 ; //indicate that program ended

}  //ending main function
