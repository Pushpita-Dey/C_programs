///  with arguments and with return value


#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b,c;
    a = 72;
    b = 8;
    c = sum(a,b);
    printf("the sum is : %d\n",c);
    return 0;
}