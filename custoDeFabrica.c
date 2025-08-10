#include <stdio.h>

int main()
{
  float custo_fabrica, custo_final;
  const float porcentagem_distribuidor = 0.28;
  const float porcentagem_impostos = 0.45;
  
  printf("Digite o valor do automovel:");
  scanf("%f", &custo_fabrica);
  
 float custo_distribuidor = custo_fabrica * porcentagem_distribuidor;
 float impostos = custo_fabrica * porcentagem_impostos;
  
 custo_final = custo_fabrica + porcentagem_distribuidor + impostos;
 
 printf ("Custo do consumidor e : %.3f", custo_final);
  
    
    return 0;
}