//Printing factorials 0 - 20.

#include <stdio.h>

long int factorial(int);
int main(){
  int i;
  int result;
  for(i=0; i<21; i++){
    printf("Loop %d\t%ld\n", i, factorial(i)); 
  }
  return 0;
}

long int factorial(int num){
  long int total=1;
  int i;
  if((num==0) || (num==1))return 1;
  else{
    for(i=2; i<=num; i++) total*=i;
  }
  return total;
}
