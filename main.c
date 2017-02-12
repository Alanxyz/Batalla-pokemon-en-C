#include <stdio.h>

void clear(){
	system("clear");
}

int main(){
	clear();

	int p1v;
	int p1a;
	int p2v;
	int p2a;

	printf(" introduce el valor vida de pk 1: ");
	scanf("%i", &p1v);
	printf("\n introduce el valor de ataque de pk 1: ");
	scanf("%i", &p1a);
	printf("\n introduce el valor de vida de pk 2: ");
	scanf("%i", &p2v);
	printf("\n introduce el valor de ataque de pk 2: ");
	scanf("%i", &p2a);

	printf("\ninicia\n");
	
	int turno = 0;

	while (p1v > 0 && p2v > 0){

		printf("\nel turno es: %d\n", turno);

		if (turno == 0){
			printf("pk 2 tenia %d de vida pero perdio %d\n", p2v, p1a);
			p2v = (p2v - p1a);
			printf("pk 2 ahora tiene %d\n", p2v);
			turno = 1;
		}
		else{
			printf("pk 1 tenia %d de vida pero perdio %d\n", p1v, p2a);
			p1v = (p1v - p2a);
			printf("pk 1 ahora tiene %d\n", p1v);
			turno = 0;
		}
	}
	printf("\n");
	
	if (p1v > 0){
		printf("pokemon 1 gano :D\n");
	}
	else{
		printf("pokemon 2 gano :D\n");
	}
	return 0;
}
