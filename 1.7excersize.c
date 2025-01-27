#include <stdio.h>

int main()
{
int number;
printf("Please enter a number ");
scanf("%d", &number);

printf((number %2 ==0) ? "This number is even" : "This number is odd");
return 1;
}