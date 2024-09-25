#include <stdio.h>

#define espressobeans 8
#define cappuccinobeans 8
#define mochabeans 8
#define espressowater 30
#define cappuccinowater 30
#define mochawater 39
#define cappuccinomilk 70
#define mochamilk 160
#define mochasyrup 30

#define initialbeans 240
#define initialwateramt 900
#define initialmilkamt 900
#define initialsyrup 900

int main() {
  int i;

  //infinite loop
  while (1){
    printf(" Enter your option from the menu: ");
    printf("1. Order a coffee type.");
    scanf("%d", &i);
    printf("2. Admin mode for the coffee maker operator.");
    scanf("%d",&i);
    printf("3. End the application execution. ");
    scanf("%d",&i);
    if(i==3)
        break;  // exit the loop
    else if (i==1)
       {
        int a;
        printf("1. Espresso"); 
        scanf("%d",&a);
             
       
       }
    else
       printf(" you've inputted the positive value %d\n", i);
  } // end of loop
} // end of main