#include<stdio.h>
int main()
{
    int a = 34, b=34;
    printf("a&&b = %d\n", a&&b);    ///here, both the operands are not zero so, the condition is true that's why compiler is showing 1

     printf("a||b= %d\n", a||b);     ///if any of these two operands is non-zero then the conditions becomes true, if a & b is zero then ans would be zero

    printf("!b= %d\n", !b);           /// here given value of b is true that's why (not of b) is zero (false)

    printf("a/b= %d\n", a/b);

    printf(" a%b= %d\n", a%b);



}


