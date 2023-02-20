/*write a program in the c language using structure to make a list of doctors from different hospitals
in different specialties, where you should have the doctor's name, id, profession, hometown, registered
hospital, designation, blood type, age & doctor's salary   */

#include <stdio.h> // including header file
struct docinfo       //global structure declaration
{
    //members or fields of structure
    char name[200];
    char hometown[200];
    char designation[200];
    char registeredhospital[200];
    char profession [200] ;
    int age;
    int id;
    float salary;
    char blood_type[200];
};     //ending the structure body with a semicolon
int main()
{     //beginning of main function

      int i,n ;         //declaring necessary variable to execute the program
      printf("how many doctors information you want to store -> ") ;   //prints the message on the screen
      scanf("%d",&n) ;    //taking user input for the number of doctors
     struct docinfo I[n];   // I is a variable of information type & n is number of doctors

    for(i=0; i<n; i++)       //using a for loop to access the structure arrays and to take user input
    {
        printf("\n Enter information for doctor %d ->\n",i+1);   //prints the massage here i+1 will execute each time increment by 1
        printf("enter name : ");   //prints the massage
        fflush(stdin);     //  to flush the output buffer of the stream
        gets(I[i].name);    //using gets function to take input of name (string) from the user
        printf("enter hometown : ");    //prints the massage
        fflush(stdin);    // to flush the output buffer of the stream
        gets(I[i].hometown);     //using gets function to take input of hometown(string) from the user
        printf("enter designation : ");      //prints the massage
        fflush(stdin);      // to flush the output buffer of the stream
        gets(I[i].designation);         //using gets function to take input of designation (string) from the user
        printf("enter registered hospital: ");    //prints the massage
        fflush(stdin);                   // to flush the output buffer of the stream
        gets(I[i].registeredhospital);          //using gets function to take input of registered hospital (string) from the user
        printf("enter age : ");                                  //prints the massage
        scanf("%d",&I[i].age);                               //using scanf to take input of age from the user
        printf("enter id : ");                                //prints the massage
        scanf("%d",&I[i].id);                            //using scanf to take input of id from the user
        printf("enter profession: ");              //prints the massage
        fflush(stdin);                                   // to flush the output buffer of the stream
        gets(I[i].profession);                    //using gets function to take input of profession(string) from the user
        printf("enter salary : ");              //prints the message
        scanf("%f",&I[i].salary);           //using scanf to take input of salary from the user
        printf("enter blood type : ");      //prints the message
        fflush(stdin);                  // to flush the output buffer of the stream
        gets(I[i].blood_type);        //using gets function to take input of (string) from the user
    }
    for(i=0; i<n; i++)    //using a for loop to print the output of information for each index
    {
        printf("\n\nDoctor Information no %d =>\n",i+1);   //prints doctor information no for each index
        printf(" Name: %s\n",I[i].name);                            // prints the name of doctor for each index
        printf(" ID : %d\n",I[i].id);                                   //prints doctors id
        printf(" Profession : %s\n",I[i].profession) ;      //prints doctors profession
        printf(" Home town : %s\n",I[i].hometown);       //prints hometown
        printf(" Registered Hospital : %s\n",I[i].registeredhospital);   //prints registered hospital
        printf(" Designation : %s\n",I[i].designation);         //prints designation
        printf(" Blood type : %s\n",I[i] .blood_type);        //prints blood type
        printf(" Age : %d\n",I[i].age);                        //prints age
        printf(" salary : %.2f\n",I[i].salary);        //prints salary

    }    //ending of for loop
    getch();    // used  to hold the console screen until the user gives a key to exit.
}   //ending main function

