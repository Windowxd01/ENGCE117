#include <stdio.h>
#include <string.h>

void GetSet( int data[] , int *num ) {
    scanf( "%d", num );
    for (int i = 0; i < *num; i++)
    {
        scanf( "%d", &data[i] ) ;
    }
}//end Function GetSet

int main() {
    int data[100], num ;
    GetSet( data , &num ) ;
    return 0 ;
}//end function