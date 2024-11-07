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
        clubes[i].pontuacao = (clubes[i].vitorias * 3) + (clubes[i].empates * 1);
    }

      printf("\nPontuações dos clubes:\n");
    for (int i = 0; i < n; i++) {
        printf("Clube: %s\n", clubes[i].nome);
        printf("Pontuação: %d\n", clubes[i].pontuacao);
        printf("-----------------------\n");
    }

    return 0;
}
