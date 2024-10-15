#include <stdio.h>
void PARES(int *vetor);
void IMPARES(int *vetor);
int SOMAPARES(int *vetor);
int SOMAIMPARES(int *vetor);
int PRIMO(int i);
void ORDEM(int *vetor);

int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Pares:");
    PARES(vetor);
    printf("\nImpares:");
    IMPARES(vetor);
    printf("\nSoma dos pares: ");
    printf("%d", SOMAPARES(vetor));
    printf("\nSoma dos impares: ");
    printf("%d", SOMAIMPARES(vetor));
    printf("\nPrimos:");
    for(int i = 0; i < 10; i++){
        if(PRIMO(vetor[i])){
            printf(" %d", vetor[i]);
        }
    }
    printf("\nVetor Ordenado:");
    ORDEM(vetor);
    for(int i = 0; i < 10; i++){
        printf(" %d", vetor[i]);
    }
    return 0;
}
void PARES(int *vetor){
    for(int A = 0; A < 10; A++){
        if(vetor[A] % 2 == 0){
            printf(" %d", vetor[A]);           
        } 
    }
}
void IMPARES(int *vetor){
    for(int A = 0; A < 10; A++){
        if(vetor[A] % 2 != 0){
            printf(" %d", vetor[A]);
        }
    }
}
int SOMAPARES(int *vetor){
    int SOMA = 0;
    for(int A = 0; A < 10; A++){
        if(vetor[A] % 2 == 0){
            SOMA = SOMA + vetor[A];
        }
    }
    return (SOMA);
}
int SOMAIMPARES(int *vetor){
    int SOMA = 0;
    for(int A = 0; A < 10; A++){
        if(vetor[A] % 2 != 0){
            SOMA = SOMA + vetor[A];
        }
    }
    return (SOMA);
}
int PRIMO(int i){
    if(i <= 1){
        return 0;
    }
   for(int D = 2; D <= i / 2; D++){
        if(i % D == 0){
        return 0;
        }
    }
    return 1;
}
void ORDEM(int *vetor){
    for(int i = 0; i < 10 - 1; i++){
        for(int j = 0; j < 10 - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int cont = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = cont;
            }
        }
    }
}
