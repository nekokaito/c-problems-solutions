#include <stdio.h>

int main ()
{    
   int p, i, temp =0;

     scanf ("%d", &p);

     if ( p == 0 || p == 1) {
        temp = 1;
     }

     for (i = 2; i <= p / 2; i++) {
        if ( p % i == 0) {
        temp = 1;
     }
     }

      if (temp == 0 && p != 1) {
        printf ("Yes");
      }

      else {
        printf ("No");
      }
     
     return 0;
     
     
     }



