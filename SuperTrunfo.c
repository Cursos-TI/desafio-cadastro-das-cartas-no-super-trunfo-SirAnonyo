#include <stdio.h>
int main(){
    //definindo variaveis
    unsigned long int População1, População2;
    int Pontos1, Pontos2;
    float Área1, Área2;
    float PIB1, PIB2;
    float Densidade1, Densidade2;
    float PIBcap1, PIBcap2;
    float Poder1, Poder2;
    char Estado1[50], Estado2[50];
    char Cidade1[50], Cidade2[50];
    char Carta1[5], Carta2[5];

    //cadastro da primeira carta
    printf("Cadastre a primeira carta\n");
    printf("digite o nome do estado (ex:Pernambubo)\n");
    scanf("%s", Estado1);
    printf("digite o nome da cidade (ex:Garanhus)\n");
    scanf("%s", Cidade1);
    printf("digite a área da cidade em km² (ex:123.456)\n");
    scanf("%f", &Área1);
    printf("digite a população da cidade (ex:123456)\n");
    scanf("%d", &População1);
    printf("digite o PIB da cidade(ex: 25100.200 para 25 bilhões 100 milhões e 200 mil)\n");
    scanf("%f", &PIB1);
    printf("digite quantos pontos turísticos existem na cidade(ex:10)\n");
    scanf("%d", &Pontos1);
    printf("finalize a carta atribuindo um código para ela (ex:A001, B002)\n");
    scanf("%s", Carta1);
    Densidade1 = (float) População1 / Área1;
    PIBcap1 = (float) PIB1 / População1;
    Poder1 = (float) (Área1+População1+PIB1+Pontos1+PIBcap1)+(1/Densidade1);

    printf("\n*******************************************\n\n");

    //cadasto da segunda carta
    printf("Cadastre a segunda carta\n");
    printf("digite o nome do estado (ex:Alagoas)\n");
    scanf("%s", Estado2);
    printf("digite o nome da cidade (ex:Maceió)\n");
    scanf("%s", Cidade2);
    printf("digite a área da cidade em km² (ex:123.456)\n");
    scanf("%f", &Área2);
    printf("digite a população da cidade (ex:123456)\n");
    scanf("%d", &População2);
    printf("digite o PIB da cidade (ex: 25100.200 para 25 bilhões 100 milhão e 200 mil)\n");
    scanf("%f", &PIB2);
    printf("digite quantos pontos turísticos existem na cidade (ex:10)\n");
    scanf("%d", &Pontos2);
    printf("finalize a carta atribuindo um código para ela (ex:A001, B002)\n");
    scanf("%s", Carta2);
    Densidade2 = (float) População2 / Área2;
    PIBcap2 = (float) PIB2 / População2;
    Poder2 = (float) (Área2+População2+PIB2+Pontos2+PIBcap2)+(1/Densidade2);

    printf("\n***Dados da Primeira carta cadastrada***\n");

    //exibindo dados cadastrados da primeira carta
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Área: %.3fkm²\n", Área1);
    printf("População: %lu habitantes\n", População1);
    printf("PIB: R$%.3f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos1);
    printf("Código da carta: %s\n", Carta1);
    printf("Densidade Populacional: %.3f hab/km²\n", Densidade1);
    printf("PIB per capita: %.3f\n", PIBcap1);
    printf("Super Poder: %.3f\n", Poder1);

    printf("\n***Dados da Segunda carta cadastrada***\n");

    //exibindo dados cadastrados da segunda carta
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Área: %.3fkm²\n", Área2);
    printf("População: %lu habitantes\n", População2);
    printf("PIB: R$%.3f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos2);
    printf("Código da carta: %s\n", Carta2);
    printf("Densidade populacional: %.3f hab/km²\n", Densidade2);
    printf("PIB per capita: %.3f\n", PIBcap2);
    printf("Super Poder: %.3f\n", Poder2);

    printf("\n***comparando as cartas e declarando a vencedora atributo por atributo***\n");
    printf("***se resultado for 1 a carta 1 ganhou se o resultado for 0 a carta 2 ganhou\n***");

    //comparando as cartas atributo por atributo
    printf("Área (ganhou a carta que possui a MAIOR área): %d\n", Área1>Área2);
    printf("População (ganhou a carta que possui a MAIOR população): %d\n", População1>População2);
    printf("PIB (ganhou a carta que possui o MAIOR PIB) %d\n", PIB1>PIB2);
    printf("Pontos Turísticos (ganhou a carta que possui o MAIOR Pontos Turísticos): %d\n", Pontos1>Pontos2);
    printf("Densidade Populacional (ganhou a carta que possui a MENOR densidade): %d\n", Densidade1<Densidade2);
    printf("PIB per capita (ganhou a carta que possui o MAIOR PIB per capita): %d\n", PIBcap1>PIBcap2);
    printf("Super Poder (ganhou a carta que possui o MAIOR super poder): %d\n", Poder1>Poder2);

    return 0;
}