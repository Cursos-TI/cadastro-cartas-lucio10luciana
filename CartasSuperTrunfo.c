#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char  carta1    [10] =     "A01";
char  estado1   [10]=    "bahia1";
char  cidade1   [10] =  "jacobina";
float   população1   =       90.000;
float pib1  =              2.000000;
float area1 =               21.929;
float   pontosturisticos1  =    30 ;
float densidadepop1      =   37.66;     
float pibpercapita1;        24.580;

// segunda carta

char  carta2   [10] = "A02";
char  estado2   [10] = "bahia2";
char  cidade2  [10] = "varzea";
float   população2 =      55.000;
float pib2        =      573.000000;
float area2      =      1.225088;
float   pontosturisticos2 =  28  ;
float densidadepop2    =   10.91;
float pibpercapita2    =   42.839;   

  // Área para entrada de dados

  printf ("digite sua carta\n", carta1);
  scanf  ("%s" , carta1);

  printf ("digite seu estado:\n", estado1);
  scanf  (" %s", estado1 );

  printf (" digite sua cidade:\n", cidade1);
  scanf  (" %s", cidade1);

  printf (" digite a população:\n", população1);
  scanf  (" %f", população1);

  printf (" digite o pib:\n", pib1);
  scanf  (" %f", pib1);

  printf (" digite a area:\n", area1);
  scanf  ("%f", area1);

  printf (" digite quantos pontos:\n", pontosturisticos1);
  scanf  ("%f", pontosturisticos1);

  printf ("qual densidade populacional?:\n", densidadepop1);
  scanf  (" %f", densidadepop1);

  printf (" digite o pibpercapita:\n",pibpercapita1);
  scanf  (" %f", pibpercapita1);

           // SEGUNDA CARTA //

    printf ("digite sua carta\n", carta2);
    scanf  ("%s" , carta2);

    printf (" digite sua cidade:\n", cidade2);
    scanf  (" %s", cidade2);

    printf ("digite seu estado:\n", estado2);
    scanf  (" %s", estado2 );

    printf (" digite a população:\n", população2);
    scanf  (" %d", população2);

    printf (" digite o pib:\n", pib2);
    scanf  (" %f", pib2);

    printf (" digite a area:\n", area2);
    scanf  ("%f", area2);       

    printf (" quantos pontos turisticos?\n", pontosturisticos2);
    scanf  ("%d", pontosturisticos2);

    printf ("qual densidade populacional?\n:", densidadepop2);
    scanf  (" %f", densidadepop2);

    printf (" digite o pibpercapita:\n",pibpercapita2);
    scanf  (" %f", pibpercapita2);


  // Área para exibição dos dados da cidade


return 0;
} 
