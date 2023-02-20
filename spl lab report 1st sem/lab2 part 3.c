///part3
///write a program to find out VOWELS (upper case or lower case)
#include <stdio.h>
int main()
{

    char ch; //variable declaration
    printf("\n enter an alphabet to identify if it is a VOWEL or consonant: ");//prompt
    scanf("%c",&ch);//

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("\n it's a vowel");
    else
    printf("%c is not a vowel, it's a consonant.",ch);

return 0;


}

