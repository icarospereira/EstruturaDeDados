#include <stdio.h>
int n = 4;

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
        
     *maximo = v[0];
     *minimo = v[4];    
     
     
     } 
     
int main(){ 
    int a;
    
    int u[n], min=0, max=0;
    
    
    u[0] = 0;
    u[1] = 1;
    u[2] = 2;
    u[3] = 3;
    u[4] = 4;
    
    maximoMinimo(u, 4,&min,&max);  
    
    printf("min: %d e max: %d", min, max);   
    
    
    scanf("%d", a);
    
    
    }



