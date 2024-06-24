#include <stdio.h>
 
int main() {
    int n, h;
    double sh, salario;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%lf", &sh);
    
    salario= sh * h;
    
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", salario);
    
    return 0;
}