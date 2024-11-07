
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

    int idBusca;
    printf("Digite o ID do produto que deseja buscar: ");
    scanf("%d", &idBusca);

    // Busca pelo produto
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].id == idBusca) {
            printf("Produto encontrado!\n");
            printf("ID: %d\n", produtos[i].id);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Valor: %.2f\n", produtos[i].valor);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", idBusca);
    }

    return 0;
}


}
