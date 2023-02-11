///with argument and without return value

#include <stdio.h>
void printstar(int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%c\n",'*');

}
int main()
{
    printstar(7);
}
