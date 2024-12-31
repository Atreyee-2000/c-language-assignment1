//2. Write a C program to find the sum of individual digits of a given
//positive integer.

#include<stdio.h>
int main(){
int n, digit, sum = 0;
printf("Enter a number : ");
scanf("%d", &n);
while(n != 0){
digit = n % 10;
sum += digit;
n = n / 10;
}
printf("Sum of the digit : %d", sum);
return 0;
}