#include<stdio.h>

// Estrutura de uma Carta
typedef struct {

    char Estado;                 // Estado (A a H)
    char CodigoCarta[50];        // Código da carta (ex: A01, B03)
    char Cidade[50];             // Nome da CIdade
    int Populacao;               // População da Cidade
    float Area;                  // Area da Cidade (em km²)
    float Pib;                   // PIB da cidade (em bilhões de reais)
    int Num_pontos_turisticos;   // Número de pontos turísticos na cidade
   
} Carta;

 // Função para cadastrar as cartas

void inserirDadosCarta(Carta *carta) {

 // Solicitando o estado   
    printf("Digite o Estado  (Uma letra de 'A' a 'H'): "); 
    scanf(" %c", &carta->Estado); // Um caractere representando o estado, que deve ser uma letra de 'A' a 'H'.

 // Solicitando o código da carta    
    printf("Digite o Codigo da carta (ex: A01, B03): "); //Uma string que representa o código da carta (ex: A01, B03).
    scanf("%s", &carta->CodigoCarta);

 // Solicitando o nome da cidade
    printf("Digite o Nome da Cidade: "); //Uma string que contém o nome da cidade.
    scanf("%s", &carta->Cidade);

 // Solicitando a população   
    printf("Digite a população: "); //Um número inteiro representando a população da cidade.
    scanf("%f", &carta->Populacao);
  
 // Solicitando a área   
    printf("Digite a área (em km²): "); //A área da cidade em quilômetros quadrados (tipo float).
    scanf("%f", &carta->Area);
  
 // Solicitando o PIB   
    printf("Informe o PIB (bilhoes de reais): "); //O PIB da cidade em bilhões de reais (tipo float).
    scanf("%f", &carta->Pib);
  
 // Solicitando o número de pontos turísticos   
    printf("Digite o número de pontos turísticos: ");//O número de pontos turísticos na cidade (tipo int).
    scanf("%d", &carta->Num_pontos_turisticos);
    
    }

// Função para exibir os dados das cartas

void exibirCarta(Carta carta) {
     printf("Estado: %c\n", carta.Estado);
     printf("Código: %s\n", carta.CodigoCarta);
     printf("Cidade: %s\n", carta.Cidade);
     printf("População: %d\n", carta.Populacao);
     printf("Área: %.2f km²\n", carta.Area);
     printf("PIB: %.2f bilhoes de reais\n", carta.Pib);
     printf("Número de pontos turísticos: %d\n", carta.Num_pontos_turisticos);
   
}

int main(){

    Carta carta1, carta2;

 // Inserir dados para a primeira carta
    printf("\nInforme os dados da primeira carta:\n");
    inserirDadosCarta(&carta1); //Solicita os dados ao usuário para preencher a estrutura Carta

 // Inserir dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");
    inserirDadosCarta(&carta2); //Solicita os dados ao usuário para preencher a estrutura Carta

 // Exibir os dados das duas cartas
    printf("\nCarta 1: \n");// Função printf para imprimir
    exibirCarta(carta1); //Exibe os dados de uma carta formatados de forma legível

    printf("\nCarta 2: \n");
    exibirCarta(carta2); //Exibe os dados de uma carta formatados de forma legível


return 0;

}
