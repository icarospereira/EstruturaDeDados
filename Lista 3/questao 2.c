#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *p;
    int k,n;
    
    printf("\nDigite os numeros do vetor (use um numero negativo para parar): \n");    
    
    p = (int*)(malloc(1*sizeof(int)));
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }
    
    n = 0;  
    scanf("%d", &p[n]);    
    
    while (p[n] >= 0){
        
        p = (int*)(realloc(p,1*sizeof(int)));
        if(p==NULL){
        
            printf("\nErro de alocaçao de memoria!");
            exit(1);
        
        }
        n = n+1;   
        scanf("%d", &p[n]);  
    
    }
    
    
    
    //-- Impressao do vetor --    
    printf("\nOs numeros do vetor sao:\n");
    for(k=0;k<n;k++){
        
        printf("%d ", p[k]);
        
        }
        
      
    
    //---- Free p ------------
    for(k=0;k<n;k++){
        
         free(&p[k]);
        
        }  
    
    
    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
