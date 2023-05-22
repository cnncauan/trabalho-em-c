#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()


int main(){
   
    int p1, maquina, i, vitoriaPessoa, vitoriaMaquina, repeticao;
   
    printf("\n\t0 = pedra | 1 = papel | 2 = tesoura\n");
   
    vitoriaPessoa = 0;
    vitoriaMaquina = 0;
    repeticao = 0;
   
    while (repeticao < 1){
    while((vitoriaPessoa < 3) && (vitoriaMaquina < 3)){
       
        /*Gerando o número do PC*/
        srand(time(NULL));
 
        for (i=0; i < 1; i++){
            maquina = rand() %3;
        }
       
        printf("\n\n\n\t----------------------\n\tEscolha sua jogada: ");
        scanf("%d", &p1);
       
       
       
        if(p1 >= 0 && p1 <=2 && maquina >= 0 && maquina <= 2){
           
           
                if(p1 != maquina){
                   
                    if((p1 == 0 && maquina == 2) || ( p1 == 1 && maquina == 0) || ( p1 == 2 && maquina == 1)){
                        printf("\n\t ---------RESULTADO---------\n\n\t********>Você ganhou!<********\t");
                        vitoriaPessoa = vitoriaPessoa + 1;
                    } else {
                        printf("\n\t ---------RESULTADO---------\n\n\t********>Máquina ganhou<********\t");
                        vitoriaMaquina= vitoriaMaquina +1;
                    }
                   
                } else {
                    printf("\n\t ---------RESULTADO---------\n\n\t********>Rodada impatada!<********\t");
                }
           
            } else {
                printf("\n\t----Jogada inválida! Por gentileza informe um número 0, 1 ou 2----\n\t");
                repeticao = repeticao + 1;
            }
   
            printf("\n\n\t--------Placar do jogo-------\n \n\t> Pessoa:%d \n\t> Maquina:%d\n\t----------------------", vitoriaPessoa, vitoriaMaquina);
     
        }
    }
}    
