#include <stdio.h>
double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO(double a, double b);
double DIVISAO(double a, double b);
double POTENCIACAO(double a, double b);
double RAIZ(double a);
int FATORIAL(int a);
int MDC(int a, int b);
int MMC(int a, int b);
double EQUACAO(double a, double b, double c);

int main() {
    int contador = 0,A = 0, B = 0;
    double a = 0.0, b = 0.0, c = 0.0;

    do{
         printf("Escolha uma operacao:\n0 - Sair\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potenciacao\n6 - Raiz Quadrada\n7 - Fatorial\n8 - MDC\n9 - MMC\n10 - Equacao de Segundo Grau\nDigite a sua escolha: ");
         scanf("%d", &contador);
        if (contador == 1)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %lf + %lf = %.5lf\n", a, b, SOMA(a, b));
        }
        if (contador == 2)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %.5lf\n",SUBTRACAO(a, b));
        }  
        if (contador == 3)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %.5lf\n",MULTIPLICACAO(a, b));
        }  
        if (contador == 4)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            if(b == 0){
                printf("Resultado indefinido");
            }else{
                printf("Resultado: %.5lf\n",DIVISAO(a, b));
            }
        }
        if (contador == 5)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            if (b == 0)
            {
                printf("Resultado: 1\n");
            }else{
                printf("Resultado: %.5lf\n",POTENCIACAO(a, b));
            }
            
        }
        if (contador == 6)
        {   
            printf("Digite o numero: ");
            scanf("%lf", &a);
            if(a < 0){
                printf("A Raiz nao existe.\n");
            }
            else
            {
                printf("Resultado: %.5lf\n",RAIZ(a));
            } 
        }
        if (contador == 7)
        {   
            printf("Digite o numero: ");
            scanf("%d", &A);
            if (A > 1)
            {
                printf("Resultado: %d\n", FATORIAL(A));   
            }else{
                printf("Resultado: 1\n");
            }        
        }  
        if (contador == 8)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%d", &A);
            printf("Digite o segundo numero: ");
            scanf("%d", &B);
            printf("Resultado: %d\n",MDC(A, B));
        } 
        if (contador == 9)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%d", &A);
            printf("Digite o segundo numero: ");
            scanf("%d", &B);
            printf("Resultado: %d\n",MMC(A, B));
        }
        if (contador == 10)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Digite o terceiro numero: ");
            scanf("%lf", &c);
            if (a == 0)
            {
                printf("Nao e uma equacao de segundo grau");
            }else{
                EQUACAO(a, b, c);

            }            
        }            
    } while (contador != 0);
    return 0;
}
double SOMA(double a, double b){
    double RESULTADO = 0.0;
    RESULTADO = a + b;
    return (RESULTADO);
}
double SUBTRACAO(double a, double b){
    double RESULTADO = 0.0;
    RESULTADO = a - b;
    return (RESULTADO);
}
double MULTIPLICACAO(double a, double b){
    double RESULTADO = 0.0;
    RESULTADO = a * b;
    return (RESULTADO);
}
double DIVISAO(double a, double b){
    double RESULTADO = 0.0;
    RESULTADO = a / b;
    return (RESULTADO);
}
double POTENCIACAO(double a, double b){
    double RESULTADO = 1.0;
   for(int i = 0; i < b; i++)
   {
    RESULTADO *= a ;
   };
    return (RESULTADO);
}
double RAIZ(double a) {
    double RESULTADO = a;         
    double precisao = 0.0001; 
    double diferenca;

    do {
        double RaizAnterior = RESULTADO;
        RESULTADO = (RESULTADO + a / RESULTADO) / 2.0;
        diferenca = RESULTADO - RaizAnterior;
        if (diferenca < 0) {
            diferenca = -diferenca;
        }
    } while (diferenca > precisao); 
    return (RESULTADO);
}
int FATORIAL(int a){
    int RESULTADO = 0;
    int contando = a, aa = a - 1;
    for(int i = 1; i < contando; i++){
        RESULTADO = a * aa;
        a = RESULTADO;
        aa--;
    }
    return (RESULTADO);
}
int MDC(int a, int b){
    int RESULTADO = 0;
    
        while(b != 0){
        RESULTADO = a % b;
        a = b;
        b = RESULTADO;
        }
    RESULTADO = a;
    return (RESULTADO);
}
int MMC(int a, int b) {
    int MDCC = MDC(a, b);
    int RESULTADO = 0;
    RESULTADO = (a * b) / MDCC;
    return (RESULTADO); 
}
double EQUACAO(double a, double b, double c){
    double RESULTADO = 0.0, RESULTADO2 = 0.0, DELTA = 0.0;
    double RAIZZ = 0.0;
    DELTA = (b * b) - (4 * a * c);
    RAIZZ = RAIZ(DELTA);
    RESULTADO = (-b + RAIZZ) / 2 * a;
    RESULTADO2 = (-b - RAIZZ) / 2 * a;
    printf("Resultados: %.5lf, %5lf\n", RESULTADO, RESULTADO2);
    return 0;
}

