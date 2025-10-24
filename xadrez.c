#include<stdio.h>

    int main(){

        printf("Desafio Xadrez!\n");
        //Movimento da torre para dereita!
        for( int i = 0; i < 5; i++){
            printf("Direita\n");// Movimentação da torre para a direita!
        }
        //MOVIMENTAÇÃO DA RAINHA PARA ESQUERDA!
        int i = 1;
        while (i <= 8) {
            printf("esquerda\n");
            i++;
        }
        //MOVIMENTAÇÃO DO BISPO 5 CASAS NA DIAGONAL DIREUTA!
        int i = 1;  
        printf("\nMovimentação do bispo!\n");
        do {
            printf("Diagonal direita\n");
            i++;
        } while (i <= 5);
        
        
    







        return 0;

    }
