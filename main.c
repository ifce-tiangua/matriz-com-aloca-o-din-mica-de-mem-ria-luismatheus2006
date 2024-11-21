#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, i, colunas, A;
    scanf("%d", &linhas);
    scanf("%d", &colunas);

    if (linhas <= 0 || colunas <= 0) {
        printf("[matriz vazia]\n");
        exit(0);
    }

    int **vetor;
    vetor = (int**)malloc(linhas * sizeof(int*));

    for (i = 0; i < linhas; i++) {
        vetor[i] = (int*)malloc(colunas * sizeof(int));
    }

    for (i = 0; i < linhas; i++) {
        for (A = 0; A < colunas; A++) {
            scanf("%d", &vetor[i][A]);
        }
    }

    for (i = 0; i < linhas; i++) {
        for (A = 0; A < colunas; A++) {
            // Verifica se não é o último elemento da linha para evitar o espaço extra
            if (A == colunas - 1) {
                printf("%d", vetor[i][A]);
            } else {
                printf("%d ", vetor[i][A]);
            }
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        free(vetor[i]);
    }
    free(vetor);

}
