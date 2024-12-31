//4. Write a C program to generate prime numbers between 1 to n.

#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d", &n);
for (int i = 2; i <= n; i++) {
int count = 0;
for(int j = 2; j < i; j++){
if(i % j == 0) {
count++;
break;
}
}
if(!count) printf("%d , ", i);
}
if(n == 1) printf("There is no prime number.");
return 0;
}