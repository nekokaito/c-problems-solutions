#include <stdio.h>

int main ()

{  int n, f;
 
   	
   	scanf("%d", &n);
   
    f = fs(n);
   	
	printf("%d", f);
    return 0;
}
 
int fs(int n)
{
   	if ( n == 0 )
    	return 0;
   	else if ( n == 1 )
    	return 1;
   	else
    	return ( fs(n - 1) + fs(n - 2) );
}
