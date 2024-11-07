#include <stdio.h>

#define MAX_CLUBES 10
#define NOME_MAX 30

typedef struct {
    int id;
    char nome[NOME_MAX];
    int vitorias;
    int empates;
    int derrotas;
    int golsPro;
    int golsContra;
    int pontuacao;
} Clube;

int main() {
    Clube clubes[MAX_CLUBES];
    int n;

    printf("Quantos clubes você deseja cadastrar (máximo %d)? ", MAX_CLUBES);
    scanf("%d", &n);

    // Leitura dos dados dos clubes
    for (int i = 0; i < n; i++) {
        printf("\nClube %d:\n", i + 1);
        printf("Digite o ID do clube: ");
        scanf("%d", &clubes[i].id);
        printf("Digite o nome do clube: ");
        scanf("%s", clubes[i].nome);
        printf("Digite o número de vitórias: ");
        scanf("%d", &clubes[i].vitorias);
        printf("Digite o número de empates: ");
        scanf("%d", &clubes[i].empates);
        printf("Digite o número de derrotas: ");
        scanf("%d", &clubes[i].derrotas);
        printf("Digite o número de gols pró: ");
        scanf("%d", &clubes[i].golsPro);
        printf("Digite o número de gols contra: ");
        scanf("%d", &clubes[i].golsContra);

        // Cálculo da pontuação
        clubes[i].pontuacao = (clubes[i].vitorias * 3) + (clubes[i].empates * 1);
    }

    // Inicialização para encontrar o melhor e o pior clube
    int melhorClubeIndex = 0;
    int piorClubeIndex = 0;

    // Encontrar o melhor e o pior clube
    for (int i = 1; i < n; i++) {
        if (clubes[i].pontuacao > clubes[melhorClubeIndex].pontuacao) {
            melhorClubeIndex = i;
        }
        if (clubes[i].pontuacao < clubes[piorClubeIndex].pontuacao) {
            piorClubeIndex = i;
        }
    }

    // Exibição dos dados do melhor clube
    printf("\nClube Campeão:\n");
    printf("ID: %d\n", clubes[melhorClubeIndex].id);
    printf("Nome: %s\n", clubes[melhorClubeIndex].nome);
    printf("Vitórias: %d\n", clubes[melhorClubeIndex].vitorias);
    printf("Empates: %d\n", clubes[melhorClubeIndex].empates);
    printf("Derrotas: %d\n", clubes[melhorClubeIndex].derrotas);
    printf("Gols Pró: %d\n", clubes[melhorClubeIndex].golsPro);
    printf("Gols Contra: %d\n", clubes[melhorClubeIndex].golsContra);
    printf("Pontuação: %d\n", clubes[melhorClubeIndex].pontuacao);
    printf("-----------------------\n");

    // Exibição dos dados do pior clube
    printf("Último Colocado:\n");
    printf("ID: %d\n", clubes[piorClubeIndex].id);
    printf("Nome: %s\n", clubes[piorClubeIndex].nome);
    printf("Vitórias: %d\n", clubes[piorClubeIndex].vitorias);
    printf("Empates: %d\n", clubes[piorClubeIndex].empates);
    printf("Derrotas: %d\n", clubes[piorClubeIndex].derrotas);
    printf("Gols Pró: %d\n", clubes[piorClubeIndex].golsPro);
    printf("Gols Contra: %d\n", clubes[piorClubeIndex].golsContra);
    printf("Pontuação: %d\n", clubes[piorClubeIndex].pontuacao);
    printf("-----------------------\n");

    return 0;
}




    

