#include <stdio.h>
int Soma();
int main() {
    int A = 0, B = 0;
     scanf("%d\n%d",&A,&B);
     printf("X = %d\n",Soma(A, B));
    return 0;
}
int Soma(int A, int B){
    int X = 0;
    X = A + B;
  return (X);
}