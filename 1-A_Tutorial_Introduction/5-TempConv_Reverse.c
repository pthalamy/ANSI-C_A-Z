#include <stdio.h>

/* 1-5: print Fahrenheit-Celsius table in reverse order */

main()
{
  int fahr;

  for(fahr = 300; fahr >= 0; fahr -= 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
