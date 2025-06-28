#include<stdio.h>

// Estrutura de uma Carta
typedef struct {

    char Estado;                 // Estado (A a H)
    char CodigoCarta[50];        // Código da carta (ex: A01, B03)
    char Cidade[50];             // Nome da Cidade
    unsigned long Populacao;               // População da Cidade
    float Area;                  // Area da Cidade (em km²)
    float Pib;                   // PIB da cidade (em bilhões de reais)
    int Num_pontos_turisticos;   // Número de pontos turísticos na cidade
    float Densidade;        // População / Área
    float Pib_per_capita;   // PIB / População
    float SuperPoder;

} Carta;

 // Função para cadastrar as cartas

void inserirDadosCarta(Carta *carta) {

 // Solicitando o estado   
    printf("Digite o Estado  (Uma letra de 'A' a 'H'): "); 
    scanf(" %c", &carta->Estado); // Um caractere representando o estado, que deve ser uma letra de 'A' a 'H'.

 // Solicitando o código da carta    
    printf("Digite o Codigo da carta (ex: A01, B03): "); //Uma string que representa o código da carta (ex: A01, B03).
    scanf("%50s", &carta->CodigoCarta);

 // Solicitando o nome da cidade
    printf("Digite o Nome da Cidade: "); //Uma string que contém o nome da cidade.
    scanf("%50s", &carta->Cidade);

 // Solicitando a população   
    printf("Digite a população: "); //Um número inteiro representando a população da cidade.
    scanf("%lu", &carta->Populacao);
  
 // Solicitando a área   
    printf("Digite a área (em km²): "); //A área da cidade em quilômetros quadrados (tipo float).
    scanf("%f", &carta->Area);
  
 // Solicitando o PIB   
    printf("Informe o PIB (bilhoes de reais): "); //O PIB da cidade em bilhões de reais (tipo float).
    scanf("%f", &carta->Pib);
  
 // Solicitando o número de pontos turísticos   
    printf("Digite o número de pontos turísticos: ");//O número de pontos turísticos na cidade (tipo int).
    scanf("%d", &carta->Num_pontos_turisticos);
    
// Cálculos automáticos
    carta->Densidade = carta->Populacao / carta->Area; //Calculo da Densidade Populacional, Divisao da população da cidade pela sua área.
    carta->Pib_per_capita = carta->Pib / carta->Populacao; //Calculo do PIB per Capita, Divisao do PIB da cidade pela sua população.
    carta->SuperPoder = (float)carta->Populacao
                      + carta->Area
                      + carta->Pib
                      + (float)carta->Num_pontos_turisticos
                      + carta->Pib_per_capita
                      + (1.0f / carta->Densidade);

    }

// Função para exibir os dados das cartas

void exibirCarta(Carta *carta) {
     printf("Estado: %c\n", carta->Estado);
     printf("Código: %s\n", carta->CodigoCarta);
     printf("Cidade: %s\n", carta->Cidade);
     printf("População: %d\n", carta->Populacao);
     printf("Área: %.2f km²\n", carta->Area);
     printf("PIB: %.2f bilhoes de reais\n", carta->Pib);
     printf("Número de pontos turísticos: %d\n", carta->Num_pontos_turisticos);
     printf("Densidade populacional: %.2f hab/km²\n", carta->Densidade);
     printf("PIB per capita: %.2f bilhões por habitante\n", carta->Pib_per_capita);
     printf("Super Poder: %.2f\n", carta->SuperPoder);
}

// Função para comparar dois atributos float ou int
int vencedorMaiorFloat(float a, float b) { return a > b; }
int vencedorMenorFloat(float a, float b) { return a < b; }

void compararCartas(const Carta *carta1, const Carta *carta2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n",(carta1->Populacao > carta2->Populacao) ? 1 : 2,(carta1->Populacao > carta2->Populacao));
    printf("Área: Carta %d venceu (%d)\n",(carta1->Area > carta2->Area) ? 1 : 2,(carta1->Area > carta2->Area));
    printf("PIB: Carta %d venceu (%d)\n",(carta1->Pib > carta2->Pib) ? 1 : 2,(carta1->Pib > carta2->Pib));
    printf("Num_pontos_turisticos: Carta %d venceu (%d)\n",(carta1->Num_pontos_turisticos > carta2->Num_pontos_turisticos) ? 1 : 2,(carta1->Pib > carta2->Num_pontos_turisticos));
    printf("Densidade: Carta %d venceu (%d)\n",(carta1->Densidade > carta2->Densidade) ? 1 : 2,(carta1->Densidade > carta2->Densidade));
    printf("Pib_per_capita: Carta %d venceu (%d)\n",(carta1->Pib_per_capita > carta2->Pib_per_capita) ? 1 : 2,(carta1->Pib_per_capita > carta2->Pib_per_capita));
    printf("Super Poder: Carta %d venceu (%d)\n",(carta1->SuperPoder > carta2->SuperPoder) ? 1 : 2,(carta1->SuperPoder > carta2->SuperPoder));
    
}

int main(){

    Carta carta1, carta2;

 // Inserir dados para a primeira carta
    printf("\nInforme os dados da primeira carta:\n");
    inserirDadosCarta(&carta1); //Solicita os dados ao usuário para preencher a estrutura Carta 1

 // Inserir dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    inserirDadosCarta(&carta2); //Solicita os dados ao usuário para preencher a estrutura Carta 2

 // Exibir os dados das duas cartas
    printf("\nCarta 1: \n");// Função printf para imprimir
    exibirCarta(&carta1); //Exibe os dados de uma carta formatados de forma legível

    printf("\nCarta 2: \n");
    exibirCarta(&carta2); //Exibe os dados de uma carta formatados de forma legível

    compararCartas(&carta1, &carta2);
  
    
return 0;

}
