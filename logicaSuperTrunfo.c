#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
      char estado[50], codigo[50], nome[50];
      unsigned long int populacao;
      float area, PIB, DensidadePopulacional, PIBPerCapita, superPoder;
      int numero, numeropontosturisticos;

      char estado2[50], codigo2[50], nome2[50];
      unsigned long int populacao2;
      float area2, PIB2, DensidadePopulacional2, PIBPerCapita2, superPoder2;
      int numero2, numeropontosturisticos2;

      //primeira carta a ser cadastrada

      printf("*** Cadastro da 1ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  
      printf("Digite o número da carta:");
      scanf("%d", &numero);
      printf("Carta: %d\n ", numero);

      printf("Digite o estado:");
      scanf("%49s", estado);
      printf("Estado: %s\n", estado);

      printf("Digite o código:");
      scanf("%49s", codigo);
      printf("Código: %s\n", codigo);

      printf("Digite o nome da cidade:");
      scanf(" %49[^\n]", nome); // Coloquei %49[^\n] para poder dar espaço nas cidades que possui mais de uma palavra
      printf("Nome da Cidade: %s\n", nome);

      printf("Digite o número da população:");
      scanf("%lu", &populacao);
      printf("População: %lu\n", populacao);

      printf("Digite a Area:");
      scanf("%f", &area);
      printf("Area: %f Km²\n", area);

      printf("Digite o PIB:");
      scanf("%f", &PIB);
      printf("PIB: %f Bilhões de reais\n", PIB);


      printf("Digite o número de pontos turísticos:");
      scanf("%d", &numeropontosturisticos);
      printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos);

      DensidadePopulacional = (float) populacao / area; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %.2f\n", DensidadePopulacional);

      PIBPerCapita = (float) PIB / populacao; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %.2f\n\n", PIBPerCapita);

      superPoder = (float) populacao + area + PIB + numeropontosturisticos + PIBPerCapita + (1.0 / DensidadePopulacional);


      //informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", numero); // Apresentação da carta cadastrada para melhor organização.
      
     printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %lu habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n", estado, codigo, nome, populacao, area, PIB, numeropontosturisticos, DensidadePopulacional, PIBPerCapita, superPoder);
      
     //Segunda carta a ser cadastrada

      printf("*** Cadastro da 2ª Carta ***\n\n"); // Frase para apresentar o primeiro cadastro 
  

      printf("Digite o número da carta:");
      scanf("%d", &numero2);
      printf("Carta: %d\n ", numero2);

      printf("Digite o estado:");
      scanf("%49s", estado2);
      printf("Estado: %s\n", estado2);

      printf("Digite o código:");
      scanf("%49s", codigo2);
      printf("Código: %s\n", codigo2);

      printf("Digite o nome da cidade:");
      scanf(" %49[^\n]", nome2); // Coloquei %49[^\n] para poder dar espaço nas cidades que possui mais de uma palavra
      printf("Nome da Cidade: %s\n", nome2);

      printf("Digite o número da população:");
      scanf("%lu", &populacao2);
      printf("População: %lu\n", populacao2);

      printf("Digite a Area:");
      scanf("%f", &area2);
      printf("Area: %f Km²\n", area2);

      printf("Digite o PIB:");
      scanf("%f", &PIB2);
      printf("PIB: %f Bilhões de reais\n", PIB2);

      printf("Digite o número de pontos turísticos:");
      scanf("%d", &numeropontosturisticos2);
      printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos2);

      DensidadePopulacional2 = (float) populacao2 / area2; // Pedi para calcular a méida da populão pela area dividindo um a quantidade de populão pelo total de área.

      printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);

      PIBPerCapita2  = (float) PIB2 / populacao2; // Pedi para calcular a média do PIB pela população divindo o PIB pela quantidade de pessoas.

      printf("PIB per Capita: %.2f\n\n", PIBPerCapita2);

      superPoder2 = (float) populacao2 + area2 + PIB2 + numeropontosturisticos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);

      //Informações para adicionar na hora de imprimir a carta

      printf("*** Carta %d ***\n\n ", numero2); // Apresentação da carta cadastrada para melhor organização.

      printf("Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %lu habitantes\n Área: %.2f Km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n Super Poder: %.2f\n\n", estado2, codigo2, nome2, populacao2, area2, PIB2, numeropontosturisticos2, DensidadePopulacional2, PIBPerCapita2,superPoder2);
      
      //Disputa de cartas

      printf("\n*** Disputa de Cartas ***\n\n");

      int escolha;

    printf("Escolha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha){

        case 1:
      printf("Carta %d (%s) - População: %lu \n", numero, nome, populacao); // Exibe a população da primeira carta cadastrada para a melhor visualização da disputa.
       printf("Carta %d (%s) - População: %lu \n", numero2, nome2, populacao2);

       // Disputa entre as cartas com a mensagem dizendo qual carta é a vencedora, isso se repete com as demais informações.

      if(populacao > populacao2) {
          printf("A carta %d (%s) - População: %.2lu venceu! \n\n", numero, nome, populacao);
      } else if(populacao < populacao2) {
          printf("A carta %d (%s) - População: %.2lu venceu! \n\n", numero2, nome2, populacao2);
      } else {
          printf("As cartas %d e %d têm a mesma população (%lu = %lu)\n\n", numero, numero2, populacao, populacao2);
      }
      break;

      case 2:
      printf("Carta %d (%s) - Área: %.2f \n", numero, nome, area); // Exibe a área da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - Área: %.2f \n", numero2, nome2, area2);

      if(area > area2) {
          printf("A carta %d (%s) - Área: %.2f venceu! \n\n", numero, nome, area);
      } else if(area < area2) {
          printf("A carta %d (%s) - Área: %.2f venceu! \n\n", numero2, nome2, area2);
      } else {
          printf("As cartas %d e %d têm a mesma área (Área: %.2f = Área: %.2f)\n\n", numero, numero2, area, area2);
      }
      break;

      case 3:
      printf("Carta %d (%s) - PIB: %.2f  \n", numero, nome, PIB); // Exibe o PIB da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - PIB: %.2f  \n", numero2, nome2, PIB2);

      if(PIB > PIB2) {
          printf("A carta %d (%s) - PIB: %.2f venceu! \n\n", numero, nome, PIB);
      } else if(PIB < PIB2) {
          printf("A carta %d (%s) - PIB: %.2f venceu! \n\n", numero2, nome2, PIB2);
      } else {
          printf("As cartas %d e %d têm o mesmo PIB (PIB: %.2f = PIB: %.2f)\n\n", numero, numero2, PIB, PIB2);
    }
      break;

      case 4:
      printf("Carta %d (%s) - Pontos Turísticos: %d \n", numero, nome, numeropontosturisticos); // Exibe os pontos turísticos da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - Pontos Turísticos: %d \n", numero2, nome2, numeropontosturisticos2);

       if(numeropontosturisticos > numeropontosturisticos2) {
          printf("A carta %d (%s) - Pontos Turísticos: %d venceu! \n\n", numero, nome, numeropontosturisticos);
      } else if(numeropontosturisticos < numeropontosturisticos2) {
          printf("A carta %d (%s) - Pontos Turísticos: %d venceu! \n\n", numero2, nome2, numeropontosturisticos2);
      } else {
          printf("As cartas %d e %d têm o mesmo número de pontos turísticos (%d = %d)\n\n", numero, numero2, numeropontosturisticos, numeropontosturisticos2);
      }
      break;

      case 5:
      printf("Carta %d (%s) - Densidade Populacional: %.2f\n", numero, nome, DensidadePopulacional); // Exibe a densidade populacional da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - Densidade Populacional: %.2f\n", numero2, nome2, DensidadePopulacional2);

      if(DensidadePopulacional < DensidadePopulacional2) {
          printf("A carta %d (%s) - Densidade Populacional: %.2f venceu! \n\n", numero, nome, DensidadePopulacional);
      } else if(DensidadePopulacional > DensidadePopulacional2) {
          printf("A carta %d (%s) - Densidade Populacional: %.2f venceu! \n\n", numero2, nome2, DensidadePopulacional2);
      } else {
          printf("As cartas %d e %d têm a mesma densidade populacional (Densidade Populacional: %.2f = Densidade Populacional: %.2f)\n\n", numero, numero2, DensidadePopulacional, DensidadePopulacional2);
      }
      break;

      case 6:
      printf("Carta %d (%s) - PIB Per Capita: %.2f\n", numero, nome, PIBPerCapita); // Exibe o PIB Per Capita da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - PIB Per Capita: %.2f\n", numero2, nome2, PIBPerCapita2);

       if(PIBPerCapita > PIBPerCapita2) {
          printf("A carta %d (%s) - PIB Per Capita: %.2f venceu! \n\n", numero, nome, PIBPerCapita);
      } else if(PIBPerCapita < PIBPerCapita2) {
          printf("A carta %d (%s) - PIB Per Capita: %.2f venceu! \n\n", numero2, nome2, PIBPerCapita2);
      } else {
          printf("As cartas %d e %d têm o mesmo PIB Per Capita (PIB Per Capita: %.2f = PIB Per Capita: %.2f)\n\n", numero, numero2, PIBPerCapita, PIBPerCapita2);
      }
      break;

      case 7:
      printf("Carta %d (%s) - Super Poder: %.2f\n", numero, nome, superPoder);  // Exibe o Super Poder da primeira carta cadastrada para a melhor visualização da disputa.
      printf("Carta %d (%s) - Super Poder: %.2f\n", numero2, nome2, superPoder2);

       if(superPoder > superPoder2) {
          printf("A carta %d (%s) - Super Poder: %.2f venceu! \n\n", numero, nome, superPoder);
      } else if(superPoder < superPoder2) {
          printf("A carta %d (%s) - Super Poder: %.2f venceu! \n\n", numero2, nome2, superPoder2);
      } else {
          printf("As cartas %d e %d têm o mesmo poder (Super Poder: %.2f = Super Poder: %.2f)\n\n", numero, numero2, superPoder, superPoder2);
      }
      break;
        default:
            printf("Opção inválida.\n");
            break;
    }

      return 0;

}