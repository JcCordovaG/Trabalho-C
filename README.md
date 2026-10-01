# Trabalho-C

Este trabalho prático tem por finalidade a implementação, em C, de um algoritmo que utilize estruturas de
seleção switch-case para simular a venda de ingressos de cinema. Para isso, o programa deverá solicitar ao
usuário a escolha do filme, do horário da sessão, do tipo de ingresso e da quantidade desejada, aplicar os
descontos previstos e apresentar, na janela do terminal, um resumo da compra e o valor total a ser pago.
Desenvolva um programa em C para calcular o valor de uma compra de ingressos para um cinema.

Inicialmente, o programa deverá apresentar o seguinte menu de filmes:
1. Aventura (A)
2. Comédia (C)
3. Ficção científica (F)
4. Terror (T)

Após a escolha do filme, apresente o menu de horários:
1. 14h
2. 17h
3. 20h
4. 22h

Os preços básicos dos ingressos são:
Horário Preço
14h R$ 20,00
17h R$ 24,00
20h R$ 30,00
22h R$ 32,00

Em seguida, solicite o tipo de ingresso:
1. Inteira
2. Meia-entrada
3. Ingresso promocional

Considere as seguintes regras:
• a meia-entrada corresponde a 50% do preço básico;
• o ingresso promocional concede desconto de 30%, mas somente nas sessões das 14h e das 17h;
• nas sessões das 20h e das 22h, a escolha do ingresso promocional deve ser rejeitada;
• para filmes de terror na sessão das 14h, conceda um desconto adicional de 10%;
• compras com mais de cinco ingressos recebem desconto de 5% sobre o valor total;
• opções inexistentes devem produzir uma mensagem de erro. 
