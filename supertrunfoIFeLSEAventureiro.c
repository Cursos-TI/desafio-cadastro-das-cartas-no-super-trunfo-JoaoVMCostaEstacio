#include <stdio.h>

int main(){
    //Explicação das variáveis : 
    //Estado - Pede a sigla dos devidos estados
    //Código - Pede o código dos devidos estados
    //Nome - Pede o nome de alguma cidade do estado
    //Área - Pede a área em km² do estado
    //PIB - Pede o PIB do devido estado
    //Pontos - Pede os pontos turísticos da cidade
    //Densidade - Resultado da População / pela Área
    //PIBperCapita - Resultado do PIB / pela população
    //SuperPoder - resultado da soma de População + Área + PIB + Pontos Turísticos + PIBperCapita - Densidade
    //Pop, Ar, PibComp, Ponto, Dens, PibperCap, Super se encontram a partir da linha 87, lá possui a fórmula e o que eles estão fazendo 

    char Estado1[5], Estado2[5];
    char Código1[5], Código2[5];
    char Nome1[30], Nome2[30];
    int População1, População2;
    float Área1, Área2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;
    float Densidade1, Densidade2;
    float PIBperCapita1, PIBperCapita2;
    float SuperPoder1, SuperPoder2;
    int Pop; 
    int Ar;
    int PibComp;
    int Ponto;
    int Dens; 
    int PibperCap;
    int Super;


    printf("\n BEM VINDO AO SUPER TRUNFO!! \n");


    //primeira carta

    printf("\n Primeira Carta. \n");
    printf("Digite a letra do Estado (Ex: RJ): \n");
    scanf("%s" , Estado1);

    printf("Digite o Código do Estado: \n");
    scanf("%s" , Código1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s" , Nome1);

    printf("Digite a População do Estado: \n");
    scanf("%i" , &População1);

    printf("Digite a Área em km²: \n");
    scanf("%f" , &Área1);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB1);

    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%i" , &Pontos1);


    //segunda carta

    printf("Segunda Carta. \n");
    printf("Digite a letra do Estado (Ex: SP): \n");
    scanf("%s" , Estado2);

    printf("Digite o Código do Estado: \n");
    scanf("%s" , Código2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s" , Nome2);

    printf("Digite a População: \n");
    scanf("%i" , &População2);

    printf("Digite a Área em km²: \n");
    scanf("%f" , &Área2);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB2);

    printf("Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%i" , &Pontos2);


    //Calculos necessários para Densiade e PIB per Capita

    Densidade1 = (float) (População1 / Área1);
    Densidade2 = (float) (População2 / Área2);
    PIBperCapita1 = (float) (PIB1 / População1);
    PIBperCapita2 = (float) (PIB2 / População2);
    SuperPoder1 = (float) (População1 + Área1 + PIB1 + Pontos1 + PIBperCapita1 - Densidade1);
    SuperPoder2 = (float) (População2 + Área2 + PIB2 + Pontos2 + PIBperCapita2 - Densidade2);

    //Comparação de poderes
    //Aqui eles fazem a medição para ver se informações da carta 1 serão maiores que a carta 2, com exceção da Densidadade (Dens), no qual é o menor que vence

    Pop = População1 > População2;
    Ar = Área1 > Área2;
    PibComp = PIB1 > PIB2;
    Ponto = Pontos1 > Pontos2;
    Dens = Densidade1 < Densidade2;
    PibperCap = PIBperCapita1 > PIBperCapita2;
    Super = SuperPoder1 > SuperPoder2;

    //Ínicio dos resultados das cartas cadastradas - CARTA 1

    printf("Cartas Cadastradas \n");
    printf("\n Carta 1 : \n");
    printf("Letra do Estado (Ex: RJ): %s \n" , Estado1);
    printf("Código do Estado: %s \n" , Código1);
    printf("Nome da Cidade: %s \n" , Nome1);
    printf("População: %i \n" , População1);
    printf("Área em km²: %.2f Quilometros quadrados \n" , Área1);
    printf("PIB: %.2f Bilhões de reais \n" , PIB1);
    printf("Quantidade de Pontos Turísticos da Cidade: %i \n" , Pontos1);
    printf("Densidade Populacional da cidade: %.2f \n" , Densidade1);
    printf("PIB per Capita da cidade: %.2f \n" , PIBperCapita1);
    printf("Quantidade do Super Poder 1: %.3f \n", SuperPoder1);

    //Resultado da segunda carta - CARTA 2

    printf("\n Carta 2 : \n");
    printf("Letra do Estado (Ex: SP): %s \n" , Estado2);
    printf("Código do Estado: %s \n" , Código2);
    printf("Nome da Cidade: %s \n" , Nome2);
    printf("População: %i \n" , População2);
    printf("Área em km²: %f \n" , Área2);
    printf("PIB: %f \n" , PIB2);
    printf("Quantidade de Pontos Turísticos da Cidade: %i \n" , Pontos2);
    printf("Densidade Populacional da cidade: %.2f \n" , Densidade2);
    printf("PIB per Capita da cidade: %.2f \n" , PIBperCapita2);
    printf("Quantidade do Super Poder 2: %.3f \n", SuperPoder2);

    
    //Menu interativo para o usuário escolher qual atributo comparar entre as cartas

    printf("\n Escolha o atributo para comparar as cartas: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade \n");
    printf("6. PIB per Capita \n");
    printf("7. Super Poder \n");
    printf("Digite o número do atributo desejado: \n");
    int atributo;
    scanf("%d" , &atributo);

    //Switch para o usuário escolher o atributo desejado, com os respectivos resultados de cada atributo
    switch (atributo) {
        case 1:
            if (Pop) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        case 2:
            if (Ar) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        case 3:
            if (PibComp) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        case 4:
            if (Ponto) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        case 5:
            if (Dens) {
                printf("A carta 1 é menor que a carta 2 \n");
            } else {
                printf("A carta 2 é menor que a carta 1 \n");
            }
            break;
        case 6:
            if (PibperCap) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        case 7:
            if (Super) {
                printf("A carta 1 é maior que a carta 2 \n");
            } else {
                printf("A carta 2 é maior que a carta 1 \n");
            }
            break;
        default:
            printf("Opção inválida! Tente novamente. \n");
    }
    printf("Obrigado por jogar! \n");

    return 0;

}
