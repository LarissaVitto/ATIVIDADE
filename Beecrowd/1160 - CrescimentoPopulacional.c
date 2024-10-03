#include <stdio.h>
 
int main() {
 
    int T = 0, PA = 0, PB = 0, anos = 0 ;
    double G1 = 0.0, G2 = 0.0;
    int total1 = 0, total2 = 0;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
  
        total1 = PA;
        total2 = PB;
        while ((total1 <= total2) && (anos < 101) )
        {

        total1 += (total1 * (G1/100));
        total2 += (total2 * (G2/100));
        anos++;
        } 
        if (anos <= 100)
        {
            printf("%d anos.\n", anos);
        }
        else
        {
            printf("Mais de 1 seculo.\n");    
        }
        anos=0;
    }
    return 0;
}