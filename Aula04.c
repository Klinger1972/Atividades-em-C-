#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media_final;
    
    printf("Digite a primeira nota (peso 40%%): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (peso 30%%): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (peso 30%%): ");
    scanf("%f", &nota3);
    
    media_final = (nota1 * 0.4) + (nota2 * 0.3) + (nota3 * 0.3);
    
    printf("\nMédia final: %.2f\n", media_final);
    
    if (media_final >= 6.0) {
        printf("Situação: APROVADO\n");
    } else {
        printf("Situação: REPROVADO\n");
    }
    
    return 0;
}
