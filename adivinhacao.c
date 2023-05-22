#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int maquina, i, numeroPessoa, tentativa, sim, fecha;
    
    tentativa = 0;
    sim = 0;
    
        while(sim < 1){
            
            printf("///////////////Informe um número: ");
            scanf("%d", &numeroPessoa);
            
            /**número 0 a 1000*/
            srand(time(NULL));
                
            for (i=0; i < 1; i++){
                maquina = rand() %1000;
            }
                
            if (maquina > numeroPessoa){
                printf("\n->Dica!!! O número informado é menor que o número sorteado pela máquina, tente novamente!\n\n");
                tentativa = tentativa + 1;
                
            } else if (maquina == numeroPessoa) {
                tentativa = tentativa + 1;
                printf("\n->Números de tentativas realizadas: %d\n\n", tentativa);
                printf("\n->Parabéns! Você acertou o número sorteado!\n\n");
                
                fecha = 0;
                while(fecha < 1){
                printf("\nVocê quer continuar?(1-SIM / 2-NAO): \n\n");
                scanf("%d", &sim);
                
                
                   
                    if ((sim == 1) || (sim == 2)){
                        
                        if(sim == 1){
                            printf("\n->Começando novamente!!!\n\n");
                            tentativa = 0;
                            sim = 0;
                            fecha = fecha + 1;
                        } else {
                            
                            printf("\n->Jogo finalizado!");
                            fecha = fecha + 1;
                        }
                        
                    } else {
                        printf("\n!!!!!!!ATENÇÃO!!!!!!!\n\nO número informado é diferente de 1 ou 2, por gentileza informar 1 ou 2!\n\n");
                        
                    }
                }    
                
            } else {
                printf("\n->Dica!!! O número informado é maior que o número sorteado pela máquina!\n\n");
                tentativa = tentativa + 1;
            }
            
            
                
            printf("\n->Números de tentativas realizadas: %d\n\n", tentativa);
            
        }
        
}





