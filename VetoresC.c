/* Ordenação de Vetores – Bubble Sort */
#include <stdio.h>
#include <stdlib.h>

/* ----- Protótipo da função de ordenação ----- */
void bubble_sort(int v[], int n);

int main(void)
{
    int tamVetor;

    /* 1. Pede o tamanho e aloca o vetor */
    printf("Quantos elementos o vetor terá? ");
    if (scanf("%d", &tamVetor) != 1 || tamVetor <= 0) {
        fprintf(stderr, "Tamanho inválido.\n");
        return 1;
    }

    int *vetor = malloc(tamVetor * sizeof(int));
    if (!vetor) {
        perror("malloc");
        return 1;
    }

    /* 2. Lê os elementos */
    printf("Digite %d inteiro(s) separados por espaço: ", tamVetor);
    for (int i = 0; i < tamVetor; ++i) {
        if (scanf("%d", &vetor[i]) != 1) {
            fprintf(stderr, "Entrada inválida.\n");
            free(vetor);
            return 1;
        }
    }

    /* 3. Ordena */
    bubble_sort(vetor, tamVetor);

    /* 4. Exibe o vetor ordenado */
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < tamVetor; ++i)
        printf("%d ", vetor[i]);
    printf("\n");

    free(vetor);
    return 0;
}

/* -------- Aqui vou inserir a implementação do Bubble Sort -------- */
void bubble_sort(int v[], int n)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                int tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;
            }
        }
    }
}
