// Author: Seth Roller

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);

  
  for(int i=1; i<=n; i++)
    {
      if(n%i==0) printf("%d\n",i);
      

    }

  


}
