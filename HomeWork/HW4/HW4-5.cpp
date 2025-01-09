#include <stdio.h>

int main() {
    int time ;

    printf( "Input Days : " ) ;
    scanf( "%d", &time  ) ;
    printf( "%d days = %d seconds", time, time * 86400 ) ;
    return 0 ;
}