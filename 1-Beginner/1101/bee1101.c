// 1101 - Sequência de Números e Soma
#include <stdio.h> 

int main(void) { 
        
    int m, n;
        
    do{
        
        scanf("%d%d", &m, &n);
        
        if(m > 0 && n > 0) {
                
            int max = m, min = n;
            if(m < n) { 
                max = n; min = m;
            }
                
            int sum = 0;
                
            for(; min <= max; min++) {
                printf("%d ", min);
                sum += min;
            }
                
            printf("Sum=%d\n", sum);
        }
            
    }while(m > 0 && n > 0);
    
    return 0; 
}