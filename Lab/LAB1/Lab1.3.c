#include <stdio.h>
#include <stdlib.h>
int *GetSet( int *num ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet(int *num) {
    int  elements[100] ;

    printf( "Enter the number of elements: " );
    scanf( "%d", num );

    for ( int i = 0; i < *num; i++ ) {
        scanf( "%d", &elements[i] );
    }// end for

    printf("Number of elements : %d\n", *num);
    for (int i = 0; i < *num; i++) {
        printf( "%d ", elements[i] );
    }//end for
    return 0;
    
}