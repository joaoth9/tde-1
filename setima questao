  // Busca pelo clube
    int encontrado = 0;
    for (int i = 0; i < n; i++) {
        if (clubes[i].id == idBusca) {
            printf("\nClube encontrado!\n");
            printf("ID: %d\n", clubes[i].id);
            printf("Nome: %s\n", clubes[i].nome);
            printf("Vitórias: %d\n", clubes[i].vitorias);
            printf("Empates: %d\n", clubes[i].empates);
            printf("Derrotas: %d\n", clubes[i].derrotas);
            printf("Gols Pró: %d\n", clubes[i].golsPro);
            printf("Gols Contra: %d\n", clubes[i].golsContra);
            printf("Pontuação: %d\n", clubes[i].pontuacao);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Clube com ID %d não encontrado.\n", idBusca);
    }

    return 0;
}
