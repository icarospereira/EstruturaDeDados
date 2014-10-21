#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int *p;
    int i,k,n;
    
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
        
    printf("\nOs numeros do vetor sao:\n");
    for(k=0;k<i;k++){
        
        printf("%d ", p[k]);
        
        }
    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
