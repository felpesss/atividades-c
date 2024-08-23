#include <stdio.h>

int main() {
    char compromisso, cidade, dinheiro, chovendo, perto;
    
    printf("Digite 's' para sim e 'n' para nao nas perguntas.\n");
    

    printf("Tenho compromisso no dia? (s/n): ");
    scanf(" %c", &compromisso);
    
    printf("Vou estar na cidade? (s/n): ");
    scanf(" %c", &cidade);
    
    printf("Tenho dinheiro? (s/n): ");
    scanf(" %c", &dinheiro);
    
    printf("Esta chovendo? (s/n): ");
    scanf(" %c", &chovendo);
    
    printf("E perto? (s/n): ");
    scanf(" %c", &perto);
    
    if ((compromisso == 'n' || compromisso == 'N') &&
        (cidade == 's' || cidade == 'S') &&
        (dinheiro == 's' || dinheiro == 'S') &&
        (chovendo == 'n' || chovendo == 'N') &&
        (perto == 's' || perto == 'S')) {
        printf("Voce pode sair.\n");
    } else {
        printf("Melhor nao sair.\n");
    }
    
    return 0;
}
