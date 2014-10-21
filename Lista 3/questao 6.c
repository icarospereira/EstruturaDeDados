#include <stdio.h>
#include <stdlib.h>

void main(){
    
    char *p;
    int i,k;
        
    printf("\nDigite o tamanho da string: ");
    scanf("%d", &i);   
    
    
    p = (char*)(malloc((i+1)*sizeof(char)));
    
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }   
             
    printf("\nDigite o conteudo da string\n");
    
    getchar();    
    gets(p);
   
        
    printf("\nString:\n");

    for (k=0; k<i; k++){
            
         if((p[k] == 'a') || (p[k] == 'A') || (p[k] == 'e') || (p[k] == 'E') || (p[k] == 'i') || (p[k] == 'I') || (p[k] == 'o') || (p[k] == 'O') || (p[k] == 'u') || (p[k] == 'U') ){
                
           printf(" ");
                
            }
         else {         
            
            printf("%c", p[k]);
            
            }
            
        }   
        
           
        
    free(p);
    printf("\n");   
    printf("\n");     
    system("pause");
    
    }
