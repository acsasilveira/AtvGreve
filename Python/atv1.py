# Com base na tabela abaixo, escreva um programa que leia o código de um item
# e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
# Código | Especificação | Preço
# 1 | Cachorro quente | R$4.00
# 2 | X-salada        | R$4.50
# 3 | X-bacon         | R$5.00
# 4 | Torrada simples | R$2.00
# 5 | Refrigerante    | R$4.00

tabela = [0.00, 4.00, 4.50, 5.00, 2.00, 4.00]
total = 0.00
codigo = int(input("Digite o código: "))
while codigo != 0:
    qtd = float(input("Informe a quantidade: "))
    preco = tabela[codigo]
    total += preco*qtd
    codigo = int(input("Digite o código: "))
print("O valor total será: R${:.2f}".format(total))
