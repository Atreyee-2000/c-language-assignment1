//1. Write a C program to find the sum and average of three numbers.

#include<stdio.h>
int main(){
int sum, num1, num2, num3;
float avg;
printf("Enter three numbers : ");
scanf("%d %d %d", &num1, &num2, &num3);
sum = num1 + num2 + num3;
avg = sum / 3.0;
printf("Sum : %d\n\n", sum);
printf("Average : %f", avg);
return 0;
}