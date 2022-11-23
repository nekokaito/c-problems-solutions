#include <stdio.h>

int main ()

{
   int d, i;

    scanf ("%d", &d);

    for (i=1; i<=d ; i++) {

        if (d%i == 0)
        printf ("%d\n", i);
    }

    return 0;
}
