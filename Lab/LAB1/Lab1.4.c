#include <stdio.h>

int GetSet( int *ars[] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function

int GetSet( int *ars[] ){
    int numb, numbs[100];
    printf( "Enter the number of elements:" ) ;
    scanf( "%d" , &numb ) ;
    printf( "Enter the elements : " ) ;

    for (int i = 0; i < numb; i++)
    {
        scanf("%d", &numbs[i]) ;
    }

    for (int i = 0; i < numb; i++)
    {
        printf("%d ", numbs[i]) ;
    }
    return 0;
    
}