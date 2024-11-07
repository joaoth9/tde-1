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

    float valorLimite;
    printf("Digite o valor limite: ");
    scanf("%f", &valorLimite);

    // Contagem de produtos abaixo do valor limite
    int contagem = 0;
    for (int i = 0; i < n; i++) {
        if (produtos[i].valor < valorLimite) {
            contagem++;
        }
    }

    printf("Quantidade de produtos abaixo de %.2f: %d\n", valorLimite, contagem);
    return 0;
}
