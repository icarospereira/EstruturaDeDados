#include <stdio.h>
#include <stdlib.h>


struct registro{
        
        int matricula;
        char sobrenome[15];
        int anonascimento;
        
        };
        
            
void main(){
    
    
    int i,k;
    struct registro *p;

    
    printf("\nDigite a quantidade de alunos que serao registrados: ");
    scanf("%d", &i);
    
    
    p = (struct registro *)(malloc(i*sizeof(struct registro)));
    if(p==NULL){
        
        printf("\nErro de alocaçao de memoria!");
        exit(1);
        
        }
        
    printf("\nRegistro:\n");
    for(k=0;k<i;k++){
        
        printf("\nInforme a matricula: ");
        scanf("%d", &p[k].matricula);
        printf("\nInforme o sobrenome: ");
        scanf("%s", p[k].sobrenome);
        printf("\nInforme o ano de nascimento: ");
        scanf("%d", &p[k].anonascimento);     
        printf("\n");    
        
        }
    printf("\n\n");       
            
    printf("\nAlunos registrados: \n");
    for(k=0;k<i;k++){
        
        printf("\nMatricula: %d ", p[k].matricula);
        printf("\nSobrenome: %s ", p[k].sobrenome);
        printf("\nAno de nascimento: %d ", p[k].anonascimento);
        printf("\n");
                        
        }
        
    for(k=0;k<i;k++){
        
         free(&p[k]);
         }
        
        
    printf("\n\n");    
    system("pause");
    
    }
