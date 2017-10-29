
#include <stdio.h>
#include <stdlib.h>



int main( int argc, char *argv[])
{
    int i ; 
    if ( argc >= 2)
    {
          for( i = 1 ; i < argc ; i++) 
          {
	    printf( "%d/%d: %s\n", i, argc-1 ,  argv[ i ] );
          }
    }
    return 0;
}


