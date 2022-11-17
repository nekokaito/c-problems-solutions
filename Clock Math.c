#include <stdio.h>

int main ()

{
  int h, m;


  scanf ("%d %d", &h, &m);

  double x = (11*m*0.5) - (30 *h);

 if (x <0) {
    x *=-1;
 }
 
 if (x <= 180) {
   printf ("%lf", x);
 }

 else {
    printf ("%lf", 360-x);
 }

  return 0;

}
