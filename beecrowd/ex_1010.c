#include <stdio.h>
 
int main() {
    int n1, n2, qtde1, qtde2;
    double punitario1, punitario2, ptotal;
    
    scanf("%d %d %lf", &n1, &qtde1, &punitario1);
    scanf("%d %d %lf", &n2, &qtde2, &punitario2);
    
    ptotal= (qtde1 * punitario1) + (qtde2 * punitario2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", ptotal);
    
    return 0;
}