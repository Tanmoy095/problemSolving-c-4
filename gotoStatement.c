//Write a C program that takes a value n and calculates the factorial of n. Demonstrate the use of goto statement(s).   
#include <stdio.h>
int main(){

int n,factorial=1;
printf("Enter a positive number:  ");
scanf("%d",&n);

fact:
if(n>0){

factorial = factorial*n;
n--;
goto fact;
}
printf("%d",factorial);

return 0;


}
