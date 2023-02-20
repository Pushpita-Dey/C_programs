/* imagine that you are planning to buy a car, & have decided on some options, now write a program in the c programming language
using various array of strings to show a paragraph in the output  */

#include <stdio.h>  // including header file
int main ()
{                // beginning of  main function

     char cn[9][20] ={"Porsche Cayenne","Hyundai Santa Fe","Kia Sorento","Porsche Taycan","Kia Sportage"} ;   //initializing 2d character array/ array of strings
      char s[] ="Porsche taycan 4S cross turismo" ;    //initializing 1d character array
    char specs[] = "4.1 s. Acceleration 0-100 km/h with Launch Control. 420 kW/571 PS" ;    //initializing 1d character array
      char feat [] ="metallic black exterior with exclusive Meissenblue rims" ;   //initializing 1d character array
      char interior [10][20] = {"black", "crayon" ," Meissenblue"} ;     //initializing 2d character array
      char design [11][12] ={"NiNi" ,"Sonderwunsch"} ;      //initializing 2d character array
      int price =  11581500 ;     //initializing integer type variable for price of the car
    printf("\n I am planning to buy a car. There are various unique car models in this showroom\n such as : %s, %s, %s, %s, %s.\n But I have decided on buying the %s\n It has %s\n The most prominent features -> It has a %s\n The spectacular interior features a combination of %s, %s & %s.\n The wheel hub covers feature the name %s  and %s\n Price of this car is BDT : %d",cn[0],cn[1],cn[2],cn[3],cn[4], s, specs,feat,interior[0],interior[1],interior[2],design[0] ,design[1],price) ;   //printing output as a paragraph on the screen

    getch() ;   //used  to hold the console screen until the user gives any key to exit

    return 0;   //indicate that program ended successfully
} //ending main function

