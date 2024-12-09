#include <stdio.h>
#include <string.h>
int n ;
void GetSet( int num[n], int *data ) {
    printf( "Enter Number : " );
    scanf("%d", &data);

    for (int i = 0; i < data; i++)
    {
        scanf("%d", num);
    }
    
}
int main() {
    int *data, num ;
    GetSet( &data, &num ) ;
    return 0 ;
}//end function