#include <stdio.h>
 
int main() {
    char codigo_Carta1 = 'C';
    char Estado1[3] = "MA";
    char Nome_Cidade1[20] = "São Luís";
    int População1 = 45.000000;
    float PIB1 = 3.750;
    int pontos_turisticos1 = 35;
    
    char codigo_Carta2 = 'D';
    char Estado2[3] = "PI";
    char Nome_Cidade2[20] = "Teresina";
    int População2 = 25.000000;
    float PIB2 = 1.750;
    int pontos_turisticos2 = 12;
 

    printf("Digite o código da Carta 01:");
    scanf("%d", &codigo_Carta1);
    printf("Código da Cidade: %c\n", codigo_Carta1);

    printf("Digite a sigla do Estado 01:");
    scanf("%d", &Estado1);
    printf("Estado: %s\n", Estado1);

    printf("Digite o nome da idade 01:");
    scanf("%d", &Nome_Cidade1);
    printf("Cidade: %s\n", Nome_Cidade1);
    
    printf("População: %d Mil habitantes\n", População1);
    printf("PIB: R$ %.7f \n", PIB1);
    printf("Turismo: %d Pontos\n\n", pontos_turisticos1);

    printf("Código da Cidade: %c\n", codigo_Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Nome_Cidade2);
    printf("População: %d Mil habitantes\n", População2);
    printf("PIB: R$ %.7f \n", PIB2);
    printf("Turismo: %d Pontos\n\n", pontos_turisticos2);

  if (PIB1 > PIB2) {
    printf("A cidade vencedora com maior PIB é:\n");
    printf("Cidade: %s\n\n", Nome_Cidade1);
    
  }
 
    return 0;
}