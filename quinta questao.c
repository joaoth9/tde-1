	#include <stdio.h>

#define MAX_PRODUTOS 10
#define NOME_MAX 20

typedef struct {
    int id;
    char nome[NOME_MAX];
    float valor;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int n;

    printf("Quantos produtos você deseja cadastrar (máximo %d)? ", MAX_PRODUTOS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

     float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += produtos[i].valor;
    }
    float media = soma / n;

        printf("\nProdutos com preço acima da média (%.2f):\n", media);
    for (int i = 0; i < n; i++) {
        if (produtos[i].valor > media) {
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor: %.2f\n", produtos[i].valor);
            printf("-----------------------\n");
        }
    }

    return 0;
}
