#include <stdio.h>

int main()
{
int temp;
printf("Please enter the temperature ");
scanf("%d", &temp);
printf("%d", temp>70&&temp<85);

return 1;
}