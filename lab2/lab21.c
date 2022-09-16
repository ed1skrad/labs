#include <stdio.h>

int main()
{
    
int fweight, sweight; // creating interger valuables

for(fweight = 0; fweight  < 24; fweight ++) // 3000 / 130 =(about) 24, Selection of values by for, from 130 kg
{
  for(sweight = 0; sweight < 19; sweight++) // 3000 / 160 =(about) 19, Selection of values by for, from 160 kg
  {
    if(fweight * 130 + sweight * 160 == 3000) // The condition is met if there are suitable values in the for
        {
        printf("The final sum of boxes weighing 130: %d. The final sum of boxes weighing 160: %d.\n", fweight, sweight);
        printf("The truck can be completely filled with boxes weighing 160 and 130 kilograms.");
        return 0;
        }
    }
}
printf("The truck can NOT be fully filled with 160 and 130 kg boxes");
return 0;
}
