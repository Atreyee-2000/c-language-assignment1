//3. Write a C program to generate the first n terms of the Fibonacci sequence.

#include<stdio.h>
int main(){
int term;
printf("Enter the term: ");
scanf("%d", &term);
int a = 0, b = 1, ans = 0;
printf("%d , %d , ", a, b);
for (int i = 2; i < term; i++){
ans = a + b;
a = b;
b = ans;
printf("%d , ", ans);
}
return 0;
}