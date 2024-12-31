//6. Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).

#include <stdio.h>
int main() {
float a, b, x;
printf("Enter the values of a, b and x : ");
scanf("%f %f %f", &a, &b, &x);
if((a*x - b) == 0) printf("Erro. ");
else printf("Result : %lf", ((a * x + b) / (a * x - b)));
return 0;
}
