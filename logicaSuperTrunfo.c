#include <stdio.h>
    int main() {
        char estado[50];
        char codigo[4];
        char nome[50];
        unsigned long int populacao;
        float area;
        float pib;
        int ponto;
        float densidade;
        float capita;

        char estado2[50];
        char codigo2[50];
        char nome2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int ponto2;
        float densidade2;
        float capita2;

    // dados da primeira carta
        
    printf("Digite as informações da sua primeira carta \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &ponto);

    //dados da segunda carta

    printf("Digite as informações da sua segunda carta \n");
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na cidade: \n");
    scanf("%d", &ponto2);

    //calculos

    
    densidade = populacao / area;
    capita = (pib * 1000000000)  / populacao;

    densidade2 = populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;

    //comparaçâo dos atributos 

    printf("Comparação de cartas (Atributo: População):\n");
    printf("carta 1 - %s (%s): %lu\n", estado, nome, populacao);
    printf("carta 2 - %s (%s): %lu\n", estado2, nome2, populacao2);

    if (populacao > populacao2)
    {
        printf("Resultado: carta 1(%s) venceu!", nome);
    } else {
        printf("Resultado: carta 2(%s) venceu!", nome2);
    }
        
    


    
    return 0;
}
