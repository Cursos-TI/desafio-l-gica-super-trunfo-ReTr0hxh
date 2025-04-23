#include <stdio.h>
    int main(){

        char pais[20] = "brasil";       
        unsigned long int populacao =  6748000;
        float area = 1182.3;
        float pib = 387.0;
        int ponto = 35;
        float densidade = 0;    
        int opcao;

        char pais2[50] = "Portugal";
        unsigned long int populacao2 = 545923;
        float area2 = 100.05;
        float pib2 = 96.6;
        int ponto2 = 40;
        float densidade2 = 0;
        int opcao2;

        //calculos

        densidade = populacao / area;
   
        densidade2 = populacao2 / area2;

        //menu

        printf("Menu principal \n");
        printf("1 - Batalha entre as cartas \n");
        printf("2 - Regras \n");
        printf("3 - Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            printf("escolha um dos atributos \n");
            printf("1 - Nome do país \n");
            printf("2 - População \n");
            printf("3 - Área \n");
            printf("4 - PIB \n");
            printf("5 - Número de pontos turísticos \n");
            printf("6 - Densidade demográfica \n");
            printf("Digite uma opção: ");
            scanf("%d", &opcao2);

            switch (opcao2)
            {
            case 1:
                printf("Carta 1: %s \n", pais);
                printf("Carta 2: %s \n", pais2);
                break;
            case 2:           
                printf("Carta 1: %s - Carta 2: %s \n", pais, pais2);
                printf("Atributo usado: População \n");
                printf("Carta 1: %lu habitantes - Carta 2: %lu habitantes \n", populacao, populacao2);
                if (populacao > populacao2)
                {
                    printf("Carta 1 venceu! \n");
                } else if (populacao < populacao2)
                {
                    printf("Carta 2 venceu! \n");
                } else {
                    printf("Empate! \n");
                }
                break;
            case 3: 
                printf("Carta 1: %s - Carta 2: %s \n", pais, pais2);
                printf("Atributo usado: Área \n");
                printf("Carta 1: %2.fkm² - Carta 2: %2.fkm² \n", area, area2);
                    if (area > area2)
                {
                    printf("Carta 1 venceu! \n");
                } else if (area < area2)
                {
                    printf("Carta 2 venceu! \n");
                } else {
                    printf("Empate! \n");
                }
                break;
            case 4:
                printf("Carta 1: %s - Carta 2: %s \n", pais, pais2);
                printf("Atributo usado: PIB \n");
                printf("Carta 1: %.2f Bilhões - Carta 2: %.2f Bilhões \n", pib, pib2);
                    if (pib > pib2)
                {
                    printf("Carta 1 venceu! \n");
                } else if (pib < pib2)
                {
                    printf("Carta 2 venceu! \n");
                } else {
                    printf("Empate! \n");
                }
                break;
            case 5:
                printf("Carta 1: %s - Carta 2: %s \n", pais, pais2);
                printf("Atributo usado: Número de pontos turísticos \n");
                printf("Carta 1: %d - Carta 2: %d \n", ponto, ponto2);
                    if (ponto > ponto2)
                {
                    printf("Carta 1 venceu! \n");
                } else if (ponto < ponto2)
                {
                    printf("Carta 2 venceu! \n");
                } else {
                    printf("Empate! \n");
                }
                break;
            case 6:
                printf("Carta 1: %s - Carta 2: %s \n", pais, pais2);
                printf("Atributo usado: Densidade demográfica \n");
                printf("Carta 1: %.2f (hab/km²) - Carta 2: %.2f (hab/km²) \n", densidade, densidade2);
                    if (densidade < densidade2)
                {
                    printf("Carta 1 venceu! \n");
                } else if (densidade > densidade2)
                {
                    printf("Carta 2 venceu! \n");
                } else {
                    printf("Empate! \n");
                }  
                break;
            default:
                printf("Opção invalida \n");
                break;
            }

            break;
        case 2:
            printf("As regras sao... \n");
            break;
        case 3: 
            printf("Sair... \n");
            break;
        default:
            printf("opçao invalida \n");
            break;
        }

   
        return 0;
        
    }