#include <stdio.h>
int tela();
double SOMA(double a, double b);
double SUBTRACAO(double a, double b);
double MULTIPLICACAO(double a, double b);
double DIVISAO(double a, double b);
/*double POTENCIACAO(double a, double b);
double RAIZ(double a);
double FATORIAL(int a);
int MDC(int a, int b);
int MMC(int a, int b);
double EQUACAO(double a, double b);
*/




int main() {
    int contador = 0,A = 0, B = 0;
    double a = 0.0, b = 0.0;

    printf("Escolha uma operacao:\n0 - Sair\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potenciacao\n6 - Raiz Quadrada\n7 - Fatorial\n8 - MDC\n9 - MMC\n10 - Equacao de Segundo Grau\nDigite a sua escolha: ");
    scanf("%d", &contador);

    /*do while (contador != 0)
    {*/
        if (contador == 1)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
            printf("Resultado: %lf + %lf = %.5lf\n", a, b, SOMA(a, b));
            tela();
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
            printf("Resultado: %.5lf\n",DIVISAO(a, b));
        }
        if (contador == 5)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
           // printf("Resultado: %.5lf\n",POTENCIACAO(a, b));
        }
        if (contador == 6)
        {   
            printf("Digite o numero: ");
            scanf("%lf", &a);
                /*if(RESULTADO < 0){
                 printf("A Raiz nao existe, digite outro numero")
                }else{
                    printf("Resultado: %.5lf\n",RAIZ(a, b));
                } */
        }  
        if (contador == 7)
        {   
            printf("Digite o numero: ");
            scanf("%d", &A);
           // printf("Resultado: %d\n",FATORIAL(A));
        }  
        if (contador == 8)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%d", &A);
            printf("Digite o segundo numero: ");
            scanf("%d", &B);
           // printf("Resultado: %d\n",MDC(A, B));
        } 
        if (contador == 9)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%d", &A);
            printf("Digite o segundo numero: ");
            scanf("%d", &B);
           // printf("Resultado: %d\n",MMC(A, B));
        }
        if (contador == 10)
        {   
            printf("Digite o primeiro numero: ");
            scanf("%lf", &a);
            printf("Digite o segundo numero: ");
            scanf("%lf", &b);
           // printf("Resultado: %.5lf\n",EQUACAO(a, b));
        }            
    //}
    

    return 0;
}

int tela(int contador){
    printf("Escolha uma operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potenciacao\n6 - Raiz Quadrada\n7 - Fatorial\n8 - MDC\n9 - MMC\n10 - Equacao de Segundo Grau\n");
    scanf("%d\n", &contador);
    return contador;
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
/*double POTENCIACAO(double a, double b){
    double RESULTADO = 0.0, RESULTADO1 = 0.0;
    for (b != 0, b--){
        RESULTADO1 = a * a;
        //arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        b--
    }
    
    return (RESULTADO);
}
double RAIZ(double a){
    double RESULTADO = 0.00;
    arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    return (RESULTADO);
}
int FATORIAL(int a){
    int RESULTADO = 0;
    for(a != 0, a--){
        RESULTADO = a * (a-1);
        arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    }
    return (RESULTADO);
}
int MDC(int a, int b){
    int RESULTADO = 0;
    arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    return (RESULTADO);
}
int MMC(int a, int b){
    int RESULTADO = 0;
    arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    return (RESULTADO);
}
int EQUACAO(double a, double b){
    int double = 0.0;
    arrumaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    return (RESULTADO);
}
*/
