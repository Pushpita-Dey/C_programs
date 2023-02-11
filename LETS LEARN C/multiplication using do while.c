#include <stdio.h>
int main()
{
    int num,i=1;

    printf("enter a num of which you wanna get the multiplication table of : ");
    scanf("%d",&num);

    printf("\n Multiplication table of: %d\n",num);

    do{

      printf("\n %d*%d = %d",num,i,num*i) ;

      i++ ;

    } while(i<=10);

    return 0;

}
