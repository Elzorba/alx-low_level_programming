#include <stdio.h>

/**
 * main - entry point
 *
 * description: print from a to z with out e or q 
 *
 * return : alway 0 ( success)
*/

int main(void)
  {
        char ch = 'a';
                while (ch <= 'z')
        {
                if ( ch == 'e' || ch == 'q')
                        ch++;
                putchar(ch);
                ch++;
        }
                putchar('\n');
                return (0);
   }
