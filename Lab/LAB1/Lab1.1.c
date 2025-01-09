#include <stdio.h>

int main() {
    int number_r ;

    scanf( "%d", &number_r );
    for ( int i = 1; i <= number_r; i++ )
        printf( "[%d] Hello World \n", i ) ;
}