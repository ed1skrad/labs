#include <stdio.h>

int main()
{
 int a, d, n; // creating variables

 printf("Input 3 values(a, d, n):\n");

 scanf_s("%d%d%d", &a, &n, &d);

 if (!(a, d, n >= '0' && a, d, n <= '9')) // checking for integer
 {
  printf("Incorrect input.");
  return 0;
 }


 if (a < 0 || n < 0) // checking for negative values
 {
  printf("Incorrect input.");
  return 0;
 }
 int partofprogression = a + (n - 1) * d; // calculation of the progression     member numbered n

 int sum = ((a + partofprogression) * n) / 2; // calculation progression amount

 printf("The sum of all numbers in an arithmetic progression is: %d\n", sum);

return 0;
}

