/* Com base na tabela abaixo, escreva um programa que leia o código de um item
e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
Código | Especificação | Preço
1 | Cachorro quente | R$4.00
2 | X-salada        | R$4.50
3 | X-bacon         | R$5.00
4 | Torrada simples | R$2.00
5 | Refrigerante    | R$4.00
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int codigo, qtd;
    float preco[6], total=0.00;
    preco[0] = 0.00;
    preco[1] = 4.00;
    preco[2] = 4.50;
    preco[3] = 5.00;
    preco[4] = 2.00;
    preco[5] = 4.00;
    printf("Olá, digite o código do produto:\t");
    scanf("%d", &codigo);
    do{
        printf("Digite a quantidade:\t");
        scanf("%d", &qtd);
        total += preco[codigo]*qtd;
        printf("Digite o código do produto:\t");
        scanf("%d", &codigo);
    }while (codigo != 0);
    printf("O total do pedido é: R$%.2f", total);
    return 0;
}