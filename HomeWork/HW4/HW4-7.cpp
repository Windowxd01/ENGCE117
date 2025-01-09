#include <stdio.h>

int main() {
    int degree ;

    printf( "User input : " ) ;
    scanf( "%d", &degree ) ;
    printf( "%d degree Celsius = %.1f degree Fahrenheit", degree, degree * 1.8 + 32 ) ;
    return 0 ;
}