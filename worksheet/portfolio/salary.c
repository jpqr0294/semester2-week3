
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Finley Schofield 
 * ID: JPQR0294
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary = 36250;   // In range 14000-40000
   float niRate = 0.08;
   float taxRate = 0.15;
   int taxFree = 12500;
   float takehome, nicont, taxcont;

    // calculate the deductions and final take-home salary
   nicont = salary * niRate;
   taxcont = (salary - taxFree) * taxRate;

   takehome = salary - nicont - taxcont;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",nicont);
    printf("Tax contribution £%.2f\n",taxcont);
    printf("Take home salary £%.2f\n",takehome);

    return 0;
 }