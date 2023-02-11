///without argument and with return value
#include <stdio.h>
int takenumber()
{
    int i;
    printf("\n enter a number:");
    scanf("%d",&i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    printf("\n the number is:%d\n",c);
}
