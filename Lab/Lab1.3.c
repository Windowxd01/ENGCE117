#include <stdio.h>
int *GetSet( int *num ) {
    int round[ 100 ];

    printf( "Enter the number of elements: " ) ;
    scanf( "%d" , num );

    for (int i = 0; i < *num; i++)
    {
        if( i < *num ){
            scanf( "%d", &round[i] );
        }
        printf("%d", *round);
    }

    printf( "Number of elements: %d \n", *num );
}

int main() {
    int *data, num ;
    data = GetSet( &num ) ;
    return 0 ;
}//end function