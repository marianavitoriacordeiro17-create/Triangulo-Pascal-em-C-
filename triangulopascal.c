#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Digite o n de linhas do triangulo de Pascal: ");
    scanf("%d", &linhas);

    while (linhas <= 0) {
        printf("Insira um valor valido maior que zero: ");
        scanf("%d", &linhas);
    }

    colunas = linhas;

    int tri[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                tri[i][j] = 1;
            }
            else {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }
    }

    printf("\nTriangulo de Pascal: %d\n", linhas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", tri[i][j]);
        }
        printf("\n");
    }

    return 0;
}
