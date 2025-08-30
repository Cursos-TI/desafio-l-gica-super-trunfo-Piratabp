    #include <stdio.h>

    int main(){

        char estado1[4], estado2[4];
        char codigo[4], codigo2[4];
        char nome1[50], nome2[50];
        unsigned long int populacao1, populacao2, resultado1, resultado2;
        int turistico1, turistico2, escolha1, escolha2;
        float area1, area2, pib1, pib2, densidade1, densidade2, pibc1, pibc2;
        float superpoder1, superpoder2;
        //Variáveis das cartas

            printf("Insira o estado da sua primeira carta: ");
            scanf("%c", estado1);
            printf("Insira o código da carta: ");
            scanf("%s", codigo);
            printf("Insira o nome da cidade: ");
            scanf("%s", nome1);
            printf("Insira a população da cidade: ");
            scanf("%d", &populacao1);
            printf("Insira a área (em Km²) da cidade: ");
            scanf("%f", &area1);
            printf("Insira o PIB da cidade: ");
            scanf("%f", &pib1);
            printf("Insira quantos pontos turísticos existem na cidade: ");
            scanf("%d", &turistico1);
            //Informações da primeira carta

            printf("Insira o estado da sua segunda carta: ");
            scanf("%s", estado2);
            printf("Insira o código da carta: ");
            scanf("%s", codigo2);
            printf("Insira o nome da cidade: ");
            scanf("%s", nome2);
            printf("Insira a população da cidade: ");
            scanf("%d", &populacao2);
            printf("Insira a área (em Km²) da cidade: ");
            scanf("%f", &area2);
            printf("Insira o PIB da cidade: ");
            scanf("%f", &pib2);
            printf("Insira quantos pontos turísticos existem na cidade: ");
            scanf("%d", &turistico2);
            //Informações da segunda carta


              densidade1 = (float) populacao1 / area1;
              pibc1 = (float) (pib1 * 1000000000) / populacao1;

              densidade2 = (float) populacao2 / area2;
              pibc2 = (float) (pib2 * 1000000000) / populacao2;
              //Operações das densidades e dos pibs

                    printf("Carta 1:\n");
                    printf("Estado: %s\n", estado1);
                    printf("Código: %s\n", codigo);
                    printf("Nome da Cidade: %s\n", nome1);
                    printf("População: %d\n", populacao1);
                    printf("Área: %.2f Km²\n", area1);
                    printf("PIB: %.2f bilhões de reais\n", pib1);
                    printf("Número de Pontos Turísticos: %d\n", turistico1);
                    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
                    printf("PIB per Capita: %.2f reais\n", pibc1);
                    //Terminal da primeira carta

                    printf("\n");
                
                    printf("Carta 2:\n");
                    printf("Estado: %s\n", estado2);
                    printf("Código: %s\n", codigo2);
                    printf("Nome da Cidade: %s\n", nome2);
                    printf("População: %d\n", populacao2);
                    printf("Área: %.2f Km²\n", area2);
                    printf("PIB: %.2f bilhões de reais\n", pib2);
                    printf("Número de Pontos Turísticos: %d\n", turistico2);
                    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
                    printf("PIB per Capita: %.2f reais\n", pibc2);
                    printf("\n");
                    //Terminal da segunda carta

                    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibc1 + (1/densidade1);
                    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibc2 + (1/densidade2); 
                    //Operações dos super poderes
                            
                            /*
                            printf("Comparação das cartas: \n");
                            printf("\n");
                            printf("População: %d\n", populacao1 > populacao2);
                            printf("Área: %.2f\n", area1 > area2);
                            printf("PIB: %.2f\n", pib1 > pib2);
                            printf("Pontos Turísticos: %.d\n", turistico1 > turistico2);
                            printf("Densidade Populacional: %.2f\n", densidade1 < densidade2);
                            printf("PIB per capita: %.2f\n", pibc1 > pibc2);
                            printf("Super Poder: %.2f\n", superpoder1 > superpoder2);
                            Terminal de comparação das cartas usado nas aulas anteriores*/

                    printf("\n");

                    printf("====Comparação das cartas====");
                    printf("\n");
                    printf("Escolha o primeiro atributo para comparar: \n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("6. PIB per capita\n");
                    printf("7. Super Poder\n");
                    scanf("%d", &escolha1);
                    //Terminal de escolha para comparação do primeiro atributo

                    switch (escolha1){
                    case 1:
                    printf("Atributo escolhido: Popolução\n");
                    printf("\n");
                    printf("Carta 1 - %s: %d\n", nome1, populacao1);
                    printf("Carta 2 - %s: %d\n", nome2, populacao2);
                    resultado1 = populacao1 > populacao2 ? 1 : 0;
                        break;
                    case 2:
                    printf("Atributo escolhido: Área\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, area1);
                    printf("Carta 2 - %s: %.2f\n", nome2, area2);
                    resultado1 = area1 > area2 ? 1 : 0;
                        break;
                    case 3:
                    printf("Atributo escolhido: PIB\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, pib1);
                    printf("Carta 2 - %s: %.2f\n", nome2, pib2);
                    resultado1 = pib1 > pib2 ? 1 : 0;
                        break;
                    case 4:
                    printf("Atributo escolhido: Pontos Turísticos\n");
                    printf("Carta 1 - %s: %d\n", nome1, turistico1);
                    printf("Carta 2 - %s: %d\n", nome2, turistico2);
                    resultado1 = turistico1 > turistico2 ? 1 : 0;
                        break;
                    case 5: 
                    printf("Atributo escolhido: Densidade Demográfica\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, densidade1);
                    printf("Carta 2 - %s: %.2f\n", nome2, densidade2);
                    resultado1 = densidade1 < densidade2 ? 1 : 0;
                        break;
                    case 6:  
                    printf("Atributo escolhido: PIB per Capita\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, pibc1);
                    printf("Carta 2 - %s: %.2f\n", nome2, pibc2);
                    resultado1 = pibc1 > pibc2 ? 1 : 0;
                        break;
                    case 7:  
                    printf("Atributo escolhido: Super Poder\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, superpoder1);
                    printf("Carta 2 - %s: %.2f\n", nome2, superpoder2);
                    resultado1 = superpoder1 > superpoder2 ? 1 : 0;
                        break;
                    default:
                        printf("Opção Inválida");
                        break;
                    }
                    //Terminal de comparação do primeiro atributo

                     printf("====Comparação das cartas====");
                    printf("\n");
                    printf("Escolha o segundo atributo para comparar: \n");
                    printf("1. População\n");
                    printf("2. Área\n");
                    printf("3. PIB\n");
                    printf("4. Pontos Turísticos\n");
                    printf("5. Densidade Demográfica\n");
                    printf("6. PIB per capita\n");
                    printf("7. Super Poder\n");
                    scanf("%d", &escolha2);
                    //Terminal de escolha para comparação do segundo atributo

                    if (escolha1 == escolha2){
                        printf("Você escolheu o mesmo atributo!\n");
                    } else{
                    switch (escolha2){
                    case 1:
                    printf("Atributo escolhido: Popolução\n");
                    printf("Carta 1 - %s: %d\n", nome1, populacao1);
                    printf("Carta 2 - %s: %d\n", nome2, populacao2);
                    resultado2 = populacao1 > populacao2 ? 1 : 0;
                        break;
                    case 2:
                    printf("Atributo escolhido: Área\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, area1);
                    printf("Carta 2 - %s: %.2f\n", nome2, area2);
                    resultado2 = area1 > area2 ? 1 : 0;
                        break;
                    case 3:
                    printf("Atributo escolhido: PIB\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, pib1);
                    printf("Carta 2 - %s: %.2f\n", nome2, pib2);
                    resultado2 = pib1 > pib2 ? 1 : 0;
                        break;
                    case 4:
                    printf("Atributo escolhido: Pontos Turísticos\n");
                    printf("Carta 1 - %s: %d\n", nome1, turistico1);
                    printf("Carta 2 - %s: %d\n", nome2, turistico2);
                    resultado2 = turistico1 > turistico2 ? 1 : 0;
                        break;
                    case 5:
                    printf("Atributo escolhido: Densidade Demográfica\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, densidade1);
                    printf("Carta 2 - %s: %.2f\n", nome2, densidade2);
                    resultado2 = densidade1 < densidade2 ? 1 : 0;
                        break;
                    case 6:
                    printf("Atributo escolhido: PIB per Capita\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, pibc1);
                    printf("Carta 2 - %s: %.2f\n", nome2, pibc2);
                    resultado2 = pibc1 > pibc2 ? 1 : 0;
                        break;
                    case 7:
                    printf("Atributo escolhido: Super Poder\n");
                    printf("Carta 1 - %s: %.2f\n", nome1, superpoder1);
                    printf("Carta 2 - %s: %.2f\n", nome2, superpoder2);
                    resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                        break;
                    default:
                        printf("Opção Inválida");
                        break;}
                    }
                    //Terminal de comparação do segundo atributo
        
                    printf("\n===== RESULTADO FINAL ====\n");
                    printf("\n");
                    if (resultado1 && resultado2){
                        printf("Carta 1 venceu!\n");
                    }else if (resultado1 != resultado2){
                        printf("Empatou!\n");
                    }else
                        printf("Carta 2 venceu!\n");

return 0; }

    return 0;
}
