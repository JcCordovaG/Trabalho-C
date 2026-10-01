#include <stdio.h>
#include <stdlib.h>

int main(){

    char F;
    int Q, I, H;
    float subtotal = 0.0;
    float total = 0.0;
    float preco = 0.0;

    printf("Digite a quantidade de ingressos: \n");
    scanf(" %d", &Q);

    for(int i=1; i<=Q; i++){

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
                printf("Código inválido! Compra encerrada\n");
                return 1;
        }

        printf("Digite o código do horário: \n");
        printf("\t (1) 14h \n");
        printf("\t (2) 17h \n");
        printf("\t (3) 20h \n");
        printf("\t (4) 22h \n");
        scanf(" %d", &H);

        switch(H){
            case 1:
                printf("O horário escolhido é 14h\n");
                preco = 20.00;
                break;
            case 2:
                printf("O horário escolhido é 17h\n");
                preco = 24.00;
                break;
            case 3:
                printf("O horário escolhido é 20h\n");
                preco = 30.00;
                break;
            case 4:
                printf("O horário escolhido é 22h\n");
                preco = 32.00;
                break;
            default:
                printf("Código inválido! Compra encerrada\n");
                return 1;
        }

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
                preco = preco / 2;
                break;

            case 3:
                printf("O ingresso escolhido é Promocional\n");
                if (H == 1 || H == 2) {
                    preco = preco * 0.7; 
                } else {
                    printf("Promocional indisponível às 20h e 22h! Compra encerrada\n");
                    return 1;
                }
                break;

            default:
                printf("Código inválido! Compra encerrada\n");
                return 1;
        }

        if (F == 'T' && H == 1) {
            preco = preco * 0.9;
            printf("Desconto adicional de 10%% (Terror às 14h)\n");
        }
    }
   
    // Filme
        if (F == 'A') {
            printf("Filme escolhido: Aventura\n");
        } else if (F == 'C') {
            printf("Filme escolhido: Comédia\n");
        } else if (F == 'F') {
            printf("Filme escolhido: Ficção científica\n");
        } else {
            printf("Filme escolhido: Terror\n");
        }

    // Horário
        if (H == 1) {
            printf("Horário: 14h\n");
        } else if (H == 2) {
            printf("Horário: 17h\n");
        } else if (H == 3) {
            printf("Horário: 20h\n");
        } else {
            printf("Horário: 22h\n");
        }

    // Tipo de ingresso
        if (I == 1) {
            printf("Tipo de ingresso: Inteira\n");
        } else if (I == 2) {
            printf("Tipo de ingresso: Meia-entrada\n");
        } else {
            printf("Tipo de ingresso: Promocional\n");
        }

        printf("Quantidade: %d\n", Q);
        printf("Valor Ingresso: R$ %.2f\n", preco);
        subtotal += preco;
        total = subtotal;

    if (Q > 5) {
        float desconto = subtotal * 0.05;
        total = subtotal - desconto;
        printf("Desconto por quantidade: 5%%\n");
        printf("Valor do desconto por quantidade: R$ %.2f\n", desconto);
    }
    
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
