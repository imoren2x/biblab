//Programme which converts Farenheit to Celsius degrees//
/////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

float F2C( const float farenheit )
{
    return 5.0/9.0 * ( farenheit - 32.0 );
}


void main()
{
  //Variables//
  float fitemp, fftemp, fstep;
  int intemp, ii;
//  int ii = 1;

  //Body programme//
  //programme presentation//
  printf("This programme converts Farenheit to Celsius degrees");
  printf("\n----------------------------------------------------");
  printf("\n\n");
  printf("What will be the initial temperature? (in Farenheit):\n");
  printf(">> ");
  scanf("%f",&fitemp); //scanf waits for a pointer in its argument
  printf("\nWhat will be the final temperature? (in Farenheit):\n");
  printf(">> ");
  scanf("%f",&fftemp);
  printf("\nWhat will be the step temperature? (in Farenheit):\n");
  printf(">> ");
  scanf("%f",&fstep);

  intemp = (int) ( fftemp - fitemp ) / fstep; //number of temperatures
  printf("\n");
  for ( ii = 0; ii <= ( intemp - 1 ); ii++)
  {
    printf("Farenheit\t|\tCelsius\n");
    printf("%3.2f\t\t|",(fitemp + ((float) ii)*fstep));
    printf("\t%3.2f", F2C(fitemp + ((float) ii)*fstep));
    printf("\n");
  }

  system("PAUSE");

}
