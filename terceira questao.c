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

    // Leitura dos dados dos produtos
    for (int i = 0; i < n; i++) {
        printf("Digite o ID do produto %d: ", i + 1);
        scanf("%d", &produtos[i].id);
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);
        printf("Digite o valor do produto %d: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    int idAtualiza;
    float novoPreco;
    printf("Digite o ID do produto que deseja atualizar: ");
    scanf("%d", &idAtualiza);

    // Busca pelo produto e atualização do preço
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == idAtualiza) {
            printf("Produto encontrado!\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Preço atual: %.2f\n", produtos[i].valor);

            printf("Digite o novo preço: ");
            scanf("%f", &novoPreco);
            produtos[i].valor = novoPreco;

            printf("Preço atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", idAtualiza);
    }

    return 0;
}
