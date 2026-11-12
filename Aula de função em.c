#include <stdio.h>

/******
 csb = calcular salario bruto
 csl = calcular salário liquido
 cd = calcular desconto
 
 Obs: Trabalho e código em c, usando ponteiros, indicadores e funções
 
*******/


float csb(float valor_hora, float horas) {
    return valor_hora * horas;
    
}


float cd(float bruto) {
    return bruto * 0.09;
}

float csl(float bruto, float desconto) {
    return bruto - desconto;
    
}

int main() {
  float valor_hora, horas, bruto, desconto, liquido;  




printf("Digite o valor da hora de trabalho: ");
scanf("%f", &valor_hora);
printf("Digite a quantidade de horas trabalhadas no mês: ");
scanf("%f", &horas);

bruto = csb(valor_hora, horas);
desconto = cd(bruto);
liquido = csl(bruto, desconto);

printf("\nSalario bruto: R$ %.2f\n",bruto);
printf("Desconto (9%%):R$ %.2f\n", desconto);
printf("Salario liquido: R$ %.2f\n", liquido);

return 0;

}