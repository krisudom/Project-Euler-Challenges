// The problem is here
// Prints the sum of all the multiples of 3 or 5 below 1000

#include <stdio.h>

int main()
{
  int output = 0;
  int i;
  for (i=0;i<1000;i++)
  {
    if ((i % 3 == 0) || (i % 5 == 0))
    {
      output += i;
    }
  }
  printf("%d\n",output);
}
