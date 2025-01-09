#include <stdio.h>
#include <string.h>
char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function
char str2[ 50 ];
char* reverse( char str1[]) {
    char *str1 ;
        int len ;
        gets( str1 ) ;
        len = strlen( str1 ) ;

        for (int i = 0 ; i < len ; i++)
        {
            str2[ i ] = str1 [ len - 1 - i] ;
        }
        
}