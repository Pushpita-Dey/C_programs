#include <stdio.h>
int main()
{
    FILE *fp ;
    char name[30] ;
    int i, s, age, phone, id ;
    char address[100], blood_group[10]  ;

    fp = fopen ("student .txt","a") ;

    if(fp==NULL)
    {
        printf("\n file does not exist") ;
    }
    else
    {
        printf("\n file is opened \n") ;
        printf("How many students data do you want to store ? ") ;
        scanf("%d",&s) ;

        for(i=1; i<=s; i++)
        {
            printf("\n No. %d Student's Info ::  ",i) ;
            printf("\n Enter student's name ->> ") ;
            scanf("%s",&name) ;

            printf("\n enter student's age -> ") ;
            scanf("%d",&age) ;

            printf("\n enter student's ID -> ") ;
            scanf("%d",&id) ;

             printf("\n enter student's Contact no. -> ") ;
            scanf("%d",&phone) ;


             fprintf(fp,"\n%s\t\t%d\t\t%d\t%d\t%s\n",name,age,phone,id) ;


        }

        fclose(fp) ;
    }
    getch() ;
}
