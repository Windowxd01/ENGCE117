#include <stdio.h>

int main() {
    float height ;
    float wide ;

    printf( "Enter H & W : " ) ;
    scanf( "%f %f", &height, &wide ) ;
    printf( "Triagle Area : %.1f", height * wide / 2 ) ;
    return 0 ;
}