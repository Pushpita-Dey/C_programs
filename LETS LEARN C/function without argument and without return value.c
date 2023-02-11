///-function without argument and without return value -///
#include<stdio.h>
void printTable();
int main()
{
    printTable();
    return 0;
}

void printTable(){
    int a,i;
    printf("the table of :");
    scanf("%d",&a);

    for(i=1;i<=10;i++){
    printf("%d * %d = %d\n", a,i,a*i);
    }
}
