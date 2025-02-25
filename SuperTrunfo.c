#include <stdio.h>
int main(){
    //definindo variaveis

    int População1, População2;
    int Pontos1, Pontos2;
    float Área1, Área2;
    float PIB1, PIB2;
    char Estado1[50], Estado2[50];
    char Cidade1[50], Cidade2[50];
    char Carta1[5], Carta2[5];
    //cadastro da primeira carta

    printf("Cadastre a primeira carta\n");
    printf("digite o nome do estado\n");
    scanf("%s", Estado1);
    printf("digite o nome da cidade\n");
    scanf("%s", Cidade1);
    printf("digite a área da cidade em km²\n");
    scanf("%f", &Área1);
    printf("digite a população da cidade\n");
    scanf("%d", &População1);
    printf("digite o PIB per capita da cidade\n");
    scanf("%f", &PIB1);
    printf("digite quantos pontos turísticos existem na cidade\n");
    scanf("%d", &Pontos1);
    printf("finalize a carta atribuindo um código para ela\n");
    scanf("%s", Carta1);
    //exibindo dados cadastrados da primeira carta

    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Área: %.2fkm²\n", Área1);
    printf("População: %d\n", População1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos1);
    printf("Código da carta %s\n", Carta1);
    //cadasto da segunda carta

    printf("Cadastre a segunda carta\n");
    printf("digite o nome do estado\n");
    scanf("%s", Estado2);
    printf("digite o nome da cidade\n");
    scanf("%s", Cidade2);
    printf("digite a área da cidade em km²\n");
    scanf("%f", &Área2);
    printf("digite a população da cidade\n");
    scanf("%d", &População2);
    printf("digite o PIB per capita da cidade\n");
    scanf("%f", &PIB2);
    printf("digite quantos pontos turísticos existem na cidade\n");
    scanf("%d", &Pontos2);
    printf("finalize a carta atribuindo um código para ela\n");
    scanf("%s", Carta2);
    //exibindo dados cadastrados da segunda carta

    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Área: %.2fkm²\n", Área2);
    printf("População: %d\n", População2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos2);
    printf("Código da carta %s\n", Carta2);
    
    return 0;
}