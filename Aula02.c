#include <stdio.h>

int main() {
    float mensalidade, novo_valor, aumento;
    
    printf("Digite o valor da mensalidade atual: R$ ");
    scanf("%f", &mensalidade);
    
    aumento = mensalidade * 0.08;
    novo_valor = mensalidade + aumento;
    
    printf("Valor da mensalidade atual: R$ %.2f\n", mensalidade);
    printf("Aumento (8%%): R$ %.2f\n", aumento);
    printf("Novo valor da mensalidade: R$ %.2f\n", novo_valor);
    
    return 0;
}
