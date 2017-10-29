
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h> 
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>

/* Default HTML:

   <HTML>
   <HEAD>
   <TITLE>HTML Img</TITLE>
   </HEAD>       
   <BODY>
        <H1>
            HTML Images
        </H1>
   </BODY>
   </HTML>
*/


int main( int argc, char *argv[])
{
    FILE *fp; 

    int i ; 
    if ( argc >= 2)
    {
          printf( "Create index.html \n" );
          fp = fopen( "index.html" , "wb" );
          fputs( "\n" , fp );
          fputs( "   <HTML>\n" , fp) ;
          fputs( "   <HEAD>\n" , fp) ;
          fputs( "   <TITLE>HTML Img</TITLE>\n" , fp) ;

               fputs( "<style>\n" , fp );
               fputs( "img {\n" , fp );
               fputs( "    max-width: 95%;\n" , fp );
               fputs( "    height: auto;      \n" , fp );
               fputs( "}\n" , fp );
               fputs( "</style>\n" , fp );

          fputs( "   </HEAD>       \n" , fp) ;
          fputs( "   <BODY>\n" , fp) ;
          for( i = 1 ; i < argc ; i++) 
          {
	      printf( "%d/%d: %s\n", i, argc-1 ,  argv[ i ] );
              fputs( "    \n" , fp) ;
              fputs( "<img src=\"", fp) ;
              fputs( argv[ i ] , fp) ;
              fputs( "\" alt=\"Image\" ", fp) ;
              fputs( "> <br>\n" , fp) ;
              printf( " => Image %s added.\n", argv[ i ]  );
          }
          fputs( "   </BODY>       \n" , fp) ;
          fputs( "   </HTML>\n" , fp) ;
          fclose( fp );
          printf( "Document index.html created. \n" );
    }
    return 0;
}


