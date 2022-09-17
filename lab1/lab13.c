#include <stdio.h> 
 
int main() 
{ 
 int fside_, sside_, tside_; 
 
 printf("Input 3 triangle values:\n"); 
 
 scanf("%d%d%d", &fside_, &sside_, &tside_); 
 
if (!(fside_, sside_, tside_ >= '0' && fside_, sside_, tside_ <= '9')) //checking for int 
 { 
  printf("Incorrect input."); 
  return 0; 
 } 
 
if(fside_ < 0 || sside_ < 0 || tside_ < 0) //checking for negative values
  { 
   printf("Incorrect input."); 
   return 0; 
  } 
 
if (fside_ + sside_ > tside_ && fside_ + tside_ > sside_ && tside_ + sside_ > fside_) // basic conditions based on the rules for constructing a triangle
 { 
  printf("Exsist."); 
  return 0; 
 } 
else 
 { 
  printf("Unexsist"); 
 } 
 return 0; 
}

