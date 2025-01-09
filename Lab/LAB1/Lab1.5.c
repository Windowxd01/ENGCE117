#include <stdio.h>
#include <stdlib.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int data[10000], m, n ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &m ) ;
    printf( "Enter the number of columns : " ) ;
    scanf( "%d", &n ) ;
    
    if( m == 0 && n == 0) {
        printf( "Matrix is \n(Empty)" ) ;
    } else if ( m == 0 || n == 0 ) {
        printf( "Error: Invalid matrix dimensions. " ) ;
    } else {
        GetMatrix( &data, &m, &n ) ;
        printf( "Matrix (%dx%d):\n", m, n ) ;
        for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                printf( "%d ", data[ i * n + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }
    return 0 ;
}//end function

void GetMatrix( int value[], int *row, int *col ) {
    printf( "Enter elements of the matrix:\n" ) ;
    for ( int i = 0; i < *row; i++ ) {
        for ( int j = 0; j < *col; j++ ) {
            if ( *row == '\n' && j != *col - 1 ) {
                    printf( "Error: Incorrect number of elements." ) ;
                    exit( 1 ) ;
            } else {
                scanf( "%d", &value[ i * *col + j ] ) ;
            }
            
        }
    }
}