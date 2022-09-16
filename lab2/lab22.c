#include <stdio.h>

int main()
{
   
 long double m, n;
 
 printf("Input values m and n:\n");
 
 scanf("%Lf%Lf", &m, &n);
 
if(!(m, n >= '0' && m, n <= '9')) // checking for nubmer value
   {
       printf("Incorrect input\n");
       return 0;
   }
if(m > n) // checking for conditions of the problem
    {
        printf("Incorrect input");
        return 0;
    }
 if(m < 0 || n < 0) // checking for negative values
    {
        printf("Incorrect input");
        return 0;
    }
 
 
 long double total = 1; // creating summator
 
 long double exsist = 0; // creating sum
 
 for(n; 0 <= n; --n)
    {
    int sum = 0;
        sum = m + n;
            total *= sum;
    }
 exsist = total * m; //fulfillment of the main condition of the task
 
 printf("Solution of the task: %Lf", exsist);
 
 return 0;
}
