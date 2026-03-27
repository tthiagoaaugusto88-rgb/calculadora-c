#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "portuguese");
	
	int opcao = 1;
	float n1 = 0;
	float n2 = 0;

	while(opcao != 0)
	{
		
	
	printf("===CALCULADORA=== \n \n");
	
	printf("1 - SOMAR \n \n");
	printf("2 - SUBTRAIR \n \n");
	printf("3 - MULTIPLICAR \n \n");
	printf("4 - DIVIDIR \n \n");
	printf("0 - SAIR \n \n");
	printf("ESCOLHA \n \n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
	case 1:
	{
		
	
		printf("DIGITE UM NÚMERO: \n \n");
		scanf("%f", &n1);
		
		printf("DIGITE OUTRO NÚMERO: \n \n");
		scanf("%f", &n2);
		float soma = n1 + n2;
		printf("RESULTADO : %.1f \n \n", soma);
		break;
	}
	case 2:
	{
		
		printf("DIGITE UM NÚMERO: \n \n");
		scanf("%f", &n1);
		
		printf("DIGITE OUTRO NÚMERO: \n \n");
		scanf("%f", &n2);
		float subtracao = n1 - n2;
		printf("RESULTADO : %.1f \n \n", subtracao);
		break;
	
	}
	case 3:
	{
		
		printf("DIGITE UM NÚMERO: \n \n");
		scanf("%f", &n1);
		
		printf("DIGITE OUTRO NÚMERO: \n \n");
		scanf("%f", &n2);
		float mutiplicacao = n1 * n2;
		printf("RESULTADO : %.1f \n \n", mutiplicacao);
		break;
	
	}
	case 4:
	{
		
		printf("DIGITE UM NÚMERO: \n \n");
		scanf("%f", &n1);
		
		printf("DIGITE OUTRO NÚMERO: \n \n");
		scanf("%f", &n2);
		float divisao = n1 / n2;
		printf("RESULTADO : %.1f \n \n", divisao);
		break;
	
	}
	case 0:
	{
		
		printf("Saindo...");
		break;
	
	}
	default:
		printf("INVALIDO");
		break;
		
	}
	}
}