#include <stdio.h>
int main()
{
    FILE *SI   ; ///declaring a file pointer named SI
    char name[21]  ;
    SI = fopen("test.txt","w")                                       ///to open the file we are using fopen() function --> to write in the function w mode we are using
    if(SI==NULL)
    {
        printf(" file -> SI does note exits ");
    }
    else
   {
        printf("file -> SI is opened");
        printf(" enter your full name :: ") ;
        gets (name) ;    /// to get the name


    }
}
