#include<stdio.h>
int main(){
    
  int number1,number2;

  printf("enter your number1:");
  scanf("%d",&number1);
  printf("enter your number2:");
  scanf("%d",&number2);

  int summation = number1+number2;
  int substraction = number1-number2;
  int multiplication = number1*number2;
  float division =(float) number1/ (float) number2;

  printf("summation =%d\n", summation);
  printf("substraction =%d\n",substraction);
  printf("multiplication = %d\n",multiplication);
  printf("divisionm = %f\n",division);

  
}