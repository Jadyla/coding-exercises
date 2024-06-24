#include <stdio.h>
 
int main() {
    char nome[30];
    double sfixo, vendas, salario;
    scanf("%s", nome);
    scanf("%lf", &sfixo);
    scanf("%lf", &vendas);
    
    salario= ((15 * vendas) / 100) + sfixo;
    
    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}