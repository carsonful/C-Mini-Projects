#include <stdio.h>

int main(void) {
  int sign;
  int num1;
  int num2;
  int result;
  int end;
  do {
  printf("Please enter one of the following:\n");
  printf(" [1] Addition\n [2] Subtraction\n [3] Division\n [4] Multiplication\nNumber:");
  scanf("%d", &sign);

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second Number: ");
  scanf("%d", &num2);
  switch (sign) {
    case 1:
    result = num1 + num2;
    printf("%d\n", result);
    break;
    case 2:
    result = num1 - num2;
    printf("%d\n", result);
    break;
    case 3:
    result = num1 / num2;
    printf("%d\n", result);
    break;
    case 4:
    result = num1 * num2;
    printf("%d\n", result);
    break;
    } 
    printf("Would you like to keep using the Calculator\n Type -1 to stop.");
    scanf("%d", &end);

    
  }  while (end > 0);
  printf("Thanks for using our calculator!");

  
  return 0;
}