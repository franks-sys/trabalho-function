#include <stdio.h>
#include <stdlib.h>

void imprime();
int subt (int A, int B);
int soma (int C, int D);
float mult (float A, float B);
float divi (float A, float B);
float media (float A, float B);
int porce (int A, int B);



int main() {
	int v1, v2, menu;
	int res;	
	int res1;
	float res2;
	float res3;
	float res4;
	int res5;
	
	do{
			
	printf("Insira o primeiro numero: ");
	scanf("%d", &v1);
		
	printf("Insira o segundo numero: ");
	scanf("%d", &v2);
	
	system ("cls");
	
	printf("[1]- Soma\n");
	printf("[2]- Subtracao\n");
	printf("[3]- Multiplicacao\n");
	printf("[4]- Divisao\n");
	printf("[5]- Media\n");
	printf("[6]- Porcentagem\n");
	printf("[0]- Sair\n");
	scanf("%d", &menu);
	system ("cls");
	switch (menu){
		
		case 1: 
			res1 = soma(v1, v2);
			printf("Res: %d  \n", res1);
			
			system ("cls");
			break;
			
		case 2: 
			res = subt(v1, v2);
			printf("Res: %d  \n", res);
			break;
			system ("cls");
			
		case 3: 
			res2 = mult(v1, v2);
			printf("Res: %.2f  \n", res2);
			break;
			system ("cls");
			
		case 4: 
			res3 = divi(v1, v2);
			printf("Res: %.2f  \n", res3);
			break;
			system ("cls");
			
		case 5: 
			printf("Res: %.2f  \n", res4);
			break;
			system ("cls");
			
		case 6: 
			res5 = porce(v1, v2);
			printf("Res: %d %%  \n", res5);
			break;	
		
		case 0: 
			printf("Ate logo...");
			break;
			system ("cls");
			printf("Opcao invalida");
		
		
	}
	} while (menu != 0);

	return 0;
}
void imprime (){
	printf("Teste\n");
}

int subt (int A, int B){
	int res;
	res = A-B;
	
	return res;
}
int soma (int A, int B){
	int res1;
	res1 = A+B;
	
	return res1;
}
float mult (float A, float B){
	float res2;
	res2 = A*B;
	
	return res2;
}
float divi (float A, float B){
	float res3;
	res3 = A/B;
	
	return res3;
}
float media (float A, float B){
	float res4;
	res4 = (A+B)/2;
	
	return res4;
}
int porce (int A, int B){
	int res5;
	res5 = (A*B)/100;
	
	return res5;
}