#include<stdio.h>
int main()
{

   FILE *si ;   ///si pointer declare korechi - student info
   char name[20] ="arpa dey" ;    ///char type array declare
   int length =strlen(name) ;
   int i ;
   si= fopen("student.txt","w")     ;     ///in first part file name and in the 2nd part file mood / file er kaj  (w mode er kaj file e kichu likhte)
   if(si==NULL)            {   ///file jodi create na hoy value hishebe null thakbe
    printf("file does not exist") ;
   }
   else
    {
    printf("\nfile is created/opened")  ;    ///value null na hole file exists
   for(i=0 ; i<length ; i++)
   {
       fputc(name[ i ],si)       ;    ///0 index theke shuru kore ek ekta index er character gula file e write korbe
   }
   printf("\nfile is written successfully") ;
    fclose(si) ;
   }
   getch() ;
}

