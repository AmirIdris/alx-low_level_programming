

#include <stdio.h>

int main()
{


    char ch = 'a';
    for (ch = 'a'; ch <= 'z'; ch++)
      {
	if (ch != 'q' && ch != 'e')
	  {
	    putchar(ch);
	  }
      }
    putchar('\n');

        

    return (0);
}

