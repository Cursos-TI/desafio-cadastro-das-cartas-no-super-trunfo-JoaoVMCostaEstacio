#include <stdio.h>

int main(){
    //Explicação das variáveis : 
    //Estado - Pede a sigla dos devidos estados
    //Código - Pede o código dos devidos estados
    //Nome - Pede o nome de alguma cidade do estado
    //Área - Pede a área em km² do estado
    //PIB - Pede o PIB do devido estado
    //Pontos - Pede os pontos turísticos da cidade

    //ATENÇÃO NÃO POR ESPAÇAMENTOS NAS RESPOSTAS, O CÓDIGO NÃO SUPORTA ELES
    
    char Estado1[5], Estado2[5];
    char Código1[5], Código2[5];
    char Nome1[30], Nome2[30];
    int População1, População2;
    float Área1, Área2;
    float PIB1, PIB2;
    int Pontos1, Pontos2;

    //primeira carta

    printf("Primeira Carta. \n");
    printf("Digite a letra do Estado (Ex: RJ): \n");
    scanf("%s" , &Estado1);

    printf("Digite o Código do Estado: \n");
    scanf("%s" , &Código1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s" , &Nome1);

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
    scanf("%s" , &Estado2);

    printf("Digite o Código do Estado: \n");
    scanf("%s" , &Código2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s" , &Nome2);

    printf("Digite a População: \n");
    scanf("%i" , &População2);

    printf("Digite a Área em km²: \n");
    scanf("%f" , &Área2);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB2);

    printf("Quantidade de Pontos Turísticos da Cidade: \n");
    scanf("%i" , &Pontos2);

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

    //Resultado da segunda carta - CARTA 2

    printf("\n Carta 2 : \n");
    printf("Letra do Estado (Ex: SP): %s \n" , Estado2);
    printf("Código do Estado: %s \n" , Código2);
    printf("Nome da Cidade: %s \n" , Nome2);
    printf("População: %i \n" , População2);
    printf("Área em km²: %f \n" , Área2);
    printf("PIB: %f \n" , PIB2);
    printf("Quantidade de Pontos Turísticos da Cidade: %i \n" , Pontos2);




}
