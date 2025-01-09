#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    printf( "%s", out );
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int len ;
    gets( str1 ) ;
    len = strlen( str1 ) ;

    for (int i = 0 ; i < len ; i++)
    {
        str2[ i ] = str1 [ len - 1 - i] ;
    }
    
    str2[ len ] = '\0' ;
}