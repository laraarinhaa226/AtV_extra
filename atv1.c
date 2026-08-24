#include <stdio.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto *p, float desc)
{
    p->preco -= (p->preco * desc) / 100;
}

int main()
{
    Produto prod = {1, "Teclado", 150.0};

    printf("Antes: R$%.2f\n", prod.preco);
    aplicarDesconto(&prod, 10.0);
    printf("Depois: R$%.2f\n", prod.preco);

    return 0;
}
