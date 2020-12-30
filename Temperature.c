#include<stdio.h>
int main()
{
    int choice;
    float tmp, result;
    float Fahrenheit, Celsius;
   printf("Temperature Conversion Menu\n");
   printf("1. Fahrenheit to Celsius\n");
   printf("2. Celsius to Fahrenheit\n");
   printf("Enter your choice : ");
   scanf("%d", & choice);
   switch(choice)
   {
   case 1:
       {
           printf("Enter Fahrenheit temperature : ");
           scanf("%f", & tmp);
          result=(tmp - 32)/1.8;
          printf("Celsius = %f\n", result);
       }
   case 2:
    {
        printf("Enter Celsius temperature : ");
           scanf("%f", & tmp);
          result=(1.8*tmp)+32;
          printf("Fahrenheit = %f\n", result);
    }
   default :
    printf("It's unvalid.\n");

   }
}
