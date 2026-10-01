#include <stdio.h>
#include <stdlib.h>

int main(){

    int Q;
    printf("Digite a quantidade de ingressos: \n");
    scanf(" %d", &Q);

    
    for(int i=1; i<=Q; i++){

        char F;
        printf("Digite o codigo do filme: \n");
        printf("\t (A) Aventura  \n");
        printf("\t (C) Comédia \n");
        printf("\t (F) Ficção científica \n");
        printf("\t (T) Terror \n");
        scanf(" %c", &F);

        switch(F){
            case 'A':
                printf("O filme escolhido é de Aventura\n");
                break;
            case 'C':
                printf("O filme escolhido é de Comédia\n");
                break;
            case 'F':
                printf("O filme escolhido é de Ficção científica\n");
                break;
            case 'T':
                printf("O filme escolhido é de Terror\n");
                break;
            default:
                printf("Código inválido!\n");
                break;
        }

        int H;
        printf("Digite o código do horário: \n");
        printf("\t (1) 14h \n");
        printf("\t (2) 17h \n");
        printf("\t (3) 20h \n");
        printf("\t (4) 22h \n");
        scanf(" %d", &H);

        switch(H){
            case 1:
                printf("O horário escolhido é 14h\n");
                printf("O Preço é R$ 20,00\n");
                break;
            case 2:
                printf("O horário escolhido é 17h\n");
                printf("O Preço é R$ 24,00\n");
                break;
            case 3:
                printf("O horário escolhido é 20h\n");
                printf("O Preço é R$ 30,00\n");
                break;
            case 4:
                printf("O horário escolhido é 22h\n");
                printf("O Preço é R$ 32,00\n");
                break;
            default:
                printf("Código inválido!\n");
        }

        int I;
        printf("Digite tipo do ingresso: \n");
        printf("\t (1) Inteira \n");
        printf("\t (2) Meia \n");
        printf("\t (3) Ingresso promocional \n");
        scanf(" %d", &I);

        switch(I){
            case 1:
                printf("O ingresso escolhido é Inteira\n");
                break;
            case 2:
                printf("O ingresso escolhido é Meia\n");

                break;
            case 3:
                printf("O ingresso escolhido é Promocional\n");
                break;
            default:
                printf("Código inválido!\n");
        }
    }


    return 0;
}