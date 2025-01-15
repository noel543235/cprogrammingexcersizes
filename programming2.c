#include <stdio.h>

int main()
{
int number;
printf("Please enter a number ");
scanf("%d", &number);
if(number == 0){
    printf("This number is 0\n");
} else if (number < 0){
    printf("This number is Negative\n");
} else{
    printf("This number is Positive\n");
}

printf((number %2 ==0) ? "This number is even" : "This number is odd");
return 1;
}