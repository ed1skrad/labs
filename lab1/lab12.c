#include <stdio.h>

int main() {
 float radius_ ,long_, width_; //creating variables

 printf("Input values:\n"); 
 scanf("%f%f%f", &radius_, &long_, &width_);

if (!(radius_, long_, width_ >= '0' && radius_, long_, width_ <= '9')) // checking for integer
 {
  printf("Incorrect input");
  return 0;
 }
if (long_ < 0 || radius_ < 0 || width_ < 0) // checking for negative values
 {
  printf("Incorrect input.");
  return 0;
 }
 float diameter = radius_ * 2; // creating diameter value
if (long_ >= diameter && width_ >= diameter) //main expression, calculating with diameter
 {
  printf("Yes, the ball will go into the hole");
 }
 else
 {
  printf("No, the ball will not go through the hole");
 }
 return 0;
}

