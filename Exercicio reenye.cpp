#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu;
    void exercicio();
	void exercicio1();
    void exercicio2();

    do {
        printf("--------------------Exercicios--------------------\n");
        printf("[ 1 ] Exercicio 1014\n");
        printf("[ 2 ] Exercicio 1020\n");
        printf("[ 3 ] Exercicio 1052\n");
        printf("[ 0 ] Sair\n");
        printf("--------------------------------------------------\n");
		scanf("%d", &menu);
        system("cls");

        switch (menu) {
            case 1:
                exercicio();
                break;
			case 2:
                exercicio1();
                break;
            case 3:
                exercicio2();
                break;
            case 0:
                printf("Ate logo...");
                break;
			default:
                break;
        }
    } while (menu != 0);

    return 0;
}
void exercicio() {
    int distancia;
    float combustivel, consumo;
	printf("--------------------------------------------------\n");
    printf("Digite a distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Digite o total de combustivel: ");
    scanf("%f", &combustivel);
	printf("--------------------------------------------------\n");
    consumo = distancia / combustivel;
	printf("--------------------------------------------------\n");
    printf("%.3f km/l\n", consumo);
	getchar (); printf("Pressione ENTER para continuar");
	getchar ();
    system("cls");
}

void exercicio1() {
    int dias, anos, meses;
	printf("--------------------------------------------------\n");
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;
	printf("--------------------------------------------------\n");
    printf("%d anos\n", anos);
    printf("%d meses\n", meses);
    printf("%d dias\n", dias);
	printf("--------------------------------------------------\n");
	getchar (); printf("Pressione ENTER para continuar");
	getchar ();
    system("cls");
}
void exercicio2() {
    int mes;
    printf("--------------------------------------------------\n");
	printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);
    
    switch (mes) {
        case 1:  printf("January\n"); 
			break;
        
		case 2:  printf("February\n");
			break;
        
		case 3:  printf("March\n");
			break;
        
		case 4:  printf("April\n"); 
			break;
        
		case 5:  printf("May\n"); 
			break;
        
		case 6:  printf("June\n");
			break;
        
		case 7:  printf("July\n"); 
			break;
        
		case 8:  printf("August\n"); 
			break;
        
		case 9:  printf("September\n");
			break;
        
		case 10: printf("October\n");
			break;
        
		case 11: printf("November\n"); 
			break;
        
		case 12: printf("December\n"); 
			break;
        default: printf("Invalid month\n"); 
			break;
    }
    printf("--------------------------------------------------\n");
	getchar(); printf("Pressione ENTER para continuar");
	getchar();
    system("cls"); 
}
