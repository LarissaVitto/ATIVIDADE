#include <stdio.h>
int Soma();
int main() {
    Soma();
    return 0;
}
int Soma(int A, int B){
    int X = 0;
  scanf("%d\n%d",&A,&B);
  X = A + B;
  printf("X = %d\n",X);
  return (X);
}