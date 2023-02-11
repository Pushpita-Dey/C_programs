#include <stdio.h>
int main()
{
    int a,i;
    printf("enter a number for the table\n");
    scanf("%d",&a);

    for(i=0; i<=10; i++)
    {

        printf("\n%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
