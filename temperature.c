#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("\nWelcome to my temperature converter!\n");               //Just a Welcome line
    printf("By BrunoMagno\n\n");

    char unit;                                                        //line 9 - 10 are the Code's variables 
    float temp;
 
    printf("Is the value in (F)fahrenheit or (C)celsius?\n");         //Here the user will choice between 'F' and 'C' to convert to another temperature
    scanf("%c",&unit);                                     
    unit= toupper(unit);                                              //c-->C | f-->F



    if (unit == 'C' ){
       printf("\nThe temperature is currently in Celsius\n");        //Here the user will insert the value him want to covert to Fahrenheit
       printf("Please entry the value:\n");
       scanf("%f",&temp);
       temp = (temp * 9/5) + 32;                                     //the calc. to convert to F.
       printf("The temperature in fahrenheit is: %.1f",temp);
    }else if(unit == 'F'){
       printf("\nThe temperature is currently in Fahrenheit\n");     //Here the user will insert the value him want to covert to Celsius
       printf("Please entry the value:\n");
       scanf("%f",&temp);
       temp = ((temp - 32)*5)/9;                                     //the calc. to convert to C.
       printf("The temperature in celsius is: %.1f",temp);
    } else{
        printf("insert a valid value");                              //this message appear if the user don't choice between F/C in the line 13
    }
    sleep(200)
    printf("\n\nThank you for using me");
}