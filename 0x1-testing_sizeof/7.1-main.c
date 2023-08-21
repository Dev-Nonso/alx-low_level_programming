#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';
   ccc = 'l';

   printf("Value of 'cc': %d\n", *cc);
   printf("Address of 'cc': %p\n", &cc);
   printf("value of 'ccc': %d\n", ccc);
   printf("Address of 'ccc': %p\n", &ccc);
  
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Value of 'c' before the call: %c\n", c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'p': %p\n", p);
   printf("Address of 'p': %p\n", &p);
   modif_my_char_var(p, c);
   printf("Value of 'c' after the call: %d\n", c);

   return (0);
}
