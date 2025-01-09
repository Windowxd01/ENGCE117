#include <stdio.h>

int main() {

    int binary ;
    scanf("%d", &binary);
    
    for (int i = 0; i < binary; i++)
    {
        binary = i % 2 ;
        if (binary % 2)
        {
            printf("0");
        } else {
            printf("1");
        }
        
    }
    
}