#include <stdio.h>


void troca (float *a, float *b) {
     int aux;
     aux = *a;
     *a = *b;
     *b = aux;
}
     
int main(){ 
    int a;
    
    float c = 30, d = 50;
    
    troca(&c,&d);
    
    printf("c: %f e d: %f", c, d);   
    
    
    scanf("%d", a); // linha somente para o console ficar aberto
    
    
    }



