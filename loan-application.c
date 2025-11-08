//Name kiminda Muchiri 
//Reg CT100/G/26251/25 
//des loan application 

#include<stdio.h>

int main(){
  int age;
  float income;
  
  //input for user
  printf("enter you age:");
  scanf("%d", & age);
  printf("enter monthly income");
  scanf("%lf",& income);
   
  // desplay input details
  printf("\nAge entered: %d\n",age);
  printf("income entered: %2lf\n",income);
   
  //look at the qualifications conditions 
  if (age>21&&income>=2400){
  printf("congratulations you qualify for a loan \n");
  }else {
  ("unfortunately you are not eligible for a loan \n");
  }  
  
    return 0;
}