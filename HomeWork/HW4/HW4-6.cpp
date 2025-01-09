#include <stdio.h>

int main() {
    int time_w ;
    char Id[ 11 ] ;
    float sar_id, result ;

    printf( " Input the Employees ID (Max. 10 chars):" ) ;
    scanf( "%10s", Id ) ;
    printf( " Input the working hrs:" ) ;
    scanf( "%d", &time_w ) ;
    printf( " Salary amount/hr:" ) ;
    scanf( "%f", &sar_id ) ;

    printf( " Employees ID = %s ", Id ) ;
    printf( " \nSalary = U$ %.2f ", time_w * sar_id ) ;
    return 0 ;
}//end main function