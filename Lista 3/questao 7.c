#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int *p;
    int i,k,j,casa;
    char *n;
        
    printf("\nDigite quantas cidades deseja comparar: ");
    scanf("%d", &i);   
    
    n = (char*)(malloc((i+1)*sizeof(char)));
    if(n==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }          
    /*printf("\nDigite os nomes das cidades: \n");
   for (k=0; k<i; k++){
        
        scanf("%s", n+k);
        
       }*/
        
    p = (int*)(malloc((i^2)*sizeof(int)));
    
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }   
             
    casa = 0;
    for(k=0; k<(i^2); k++){
        
       
          
            scanf("%d", p[casa]);
            
            casa ++;
                        
          
            
        } 
        
    printf("\nMatriz de distancias:\n");
    casa = 0;
    for(k=0; k<i; k++){
        
        for (j=0; j<i; j++){
            
            printf("%d ", *p[casa]);
            casa ++;
                        
            }   
        printf("\n ");   
        
        }       
        
    free(p);
    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
