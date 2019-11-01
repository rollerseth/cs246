// Author: Seth Roller

# include <stdio.h>
# include <ctype.h>

int main(int argc, char *argv[]) {

  int c;

  // standard way to read a char at a time
  while ((c=getchar())!=EOF) {
    
    if (isalpha(c)!=0)
    {
      if (islower(c)!=0)
      {
	putchar(toupper(c));
      }

      else
	putchar(c);
    }
    else
      putchar(c);
    

  }



}
