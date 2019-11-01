// Author: Seth Roller

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

long factorial(int n);
long binomial(int n, int k);

int main(int argc, char *argv[])
{
  if (argc != 2)
    {
      fprintf(stderr, "Usage: %s: %s: %s\n",
	      argv[0],argv[1],strerror(errno));
      exit(1);
    }
  
  int oneArg = atoi(argv[1]);

  for (int j = 0; j <= oneArg; j++)
  {
    for (int r = 0; r < (oneArg - (j) + (45 - 3 * j)); r++)
      printf(" ");
    
    for (int k = 0; k <= j; k++)
    {
      printf("%8ld", binomial(j, k)); 
      
    }
    printf("\n");
    
    
  }
  
}
  

long factorial(int n)
{
  int fact = n;
  
  if (n == 0)
    return 1;
  else
  {
    for (int i = n - 1; i >= 1; i--)
      fact *= i;
    return fact;
  }
  

}

long binomial(int n, int k)
{
  long newN = factorial(n);
  long newK = factorial(k);
  long subtract = factorial(n - k);

  return (newN / (newK * subtract));


}
