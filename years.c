#include <stdio.h>
#include <stdlib.h>

// arg indexes
#define TIME_INPUT 1
#define MAH_INPUT  2
#define TOTAL_MAH  3

int main(int argc, char** argv)
{
  float f_years = 0.0;
  float f_time  = 0.0;
  float f_consumption = 0.0;
  float f_total_mah = 0;

  if(4 > argc)
  {
    printf("\nusage: years <seconds> <consumption_in_mah> <battery_mah>\n\n");
  } 
  else
  {
    f_time = atof(argv[TIME_INPUT]);
    f_consumption = atof(argv[MAH_INPUT]);
    f_total_mah = atof(argv[TOTAL_MAH]);

    f_years = ((f_total_mah/f_consumption)*f_time)/3600.0f/24.0f/365.0f;

    printf("\nYears (assuming same consumption trends): %f\n\n", f_years);
  }
  return 0;
}
