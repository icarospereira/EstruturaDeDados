#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int *p;
    int i,k,n;
    
    p = (int*)(malloc(5*sizeof(int)));
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }
        
    printf("\nDigite 5 numeros do vetor\n");
    for(k=0;k<5;k++){
        
        scanf("%d", &p[k]);
        
        }
        
    printf("\nOs numeros do vetor sao:\n");
    for(k=0;k<5;k++){
        
        printf("%d ", p[k]);
        
        }
    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
