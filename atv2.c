
#include <stdio.h>

typedef struct
{
    int codProd;
    char nomeItem[50];
    float precoUnit;
} Artigo;

void aplicarDesconto(Artigo *ponteiro, float pctDesc)
{
    printf("Preco antes: %.2f\n", ponteiro->precoUnit);
    ponteiro->precoUnit = ponteiro->precoUnit - (ponteiro->precoUnit * pctDesc / 100);
    printf("Preco depois: %.2f\n", ponteiro->precoUnit);
}

int main()
{
    Artigo fone = {4, "Fone de Ouvido", 250.0};
    aplicarDesconto(&fone, 25.0);
    return 0;
}
