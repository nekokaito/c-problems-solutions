#include <stdio.h>

int main ()

{ int n, temp = 1;
   scanf("%d", &n);
 
   for(int i=1; i<=n; i++)
   {
      temp=(temp*i)%10000;
   }
 
   printf("%d\n",temp);
 
   return 0;
}
