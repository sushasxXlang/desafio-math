#include <stdio.h>
#include <stdlib.h> 

    int escolha;
    int f;
    int s;
    long long int fatorado = 1;
    long long int sequencia = 1;
    int i;
    
void cabecalho() { //menu inicial
        printf("-------------Menu Matematico-------------\n");
    }
    int fatorando(int n) {
        for(i = 1; i <= n; i++){
            f *= i;
        }
        return fatorado;
    }

int main() {
    long long int fat;
    int num;
    // layout do menu
    while(escolha != 0) {
    cabecalho();
    printf("1 - Calcular fatorial\n");
    printf("2 - gerar sequencia Fibonacci\n");
    printf("0 - Sair\n");
    printf("--------------------------\n");
    printf("Escolha uma opcao\n");
    scanf("%d", &escolha);
        if (escolha > 2){

            printf("Opcao invalida\n");
        } else if(escolha == 1) {

            printf("Escolha um nmumero inteiro: \n");
            scanf("%d", &num);
            fat = fatorando(num);
            printf("O fatorial de %d e: %lld\n", num, fat);
        }
        else if (escolha == 0) {
        system("cls");
        printf("encerrando programa...");
    }
    return 0;
}
}