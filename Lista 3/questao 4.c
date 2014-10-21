#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int *p;
    int i,k,n, qpar, qimpar;
    
    
    printf("\nDigite a quantidade de numeros que serao digitados: ");
    scanf("%d", &i);
    
    
    p = (int*)(malloc(i*sizeof(int)));
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }
        
    printf("\nDigite os numeros do vetor\n");
    for(k=0;k<i;k++){
        
        scanf("%d", &p[k]);
        
        }
    qpar = 0;
    qimpar=0;
    n=0;  
    
    for(k=0;k<i;k++){
        
        n = p[k] % 2; 

        
        if (n == 0){
            
            qpar = qpar + 1;
            }   
        else {
            qimpar = qimpar + 1;
            }    
    
        }    
        
    printf("\nQuantidade de pares: %d\n",qpar);
    
    printf("\nQuantidade de impares: %d\n", qimpar);

    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
