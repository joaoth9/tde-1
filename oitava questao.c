   // Cálculo da média de gols pró
    int somaGolsPro = 0;
    for (int i = 0; i < n; i++) {
        somaGolsPro += clubes[i].golsPro;
    }
    float mediaGolsPro = (float)somaGolsPro / n;

    // Exibição dos clubes com gols pró acima da média
    printf("\nClubes com gols pró acima da média (%.2f):\n", mediaGolsPro);
    for (int i = 0; i < n; i++) {
        if (clubes[i].golsPro > mediaGolsPro) {
            printf("ID: %d\n", clubes[i].id);
            printf("Nome: %s\n", clubes[i].nome);
            printf("Gols Pró: %d\n", clubes[i].golsPro);
            printf("Pontuação: %d\n", clubes[i].pontuacao);
            printf("-----------------------\n");
        }
    }
