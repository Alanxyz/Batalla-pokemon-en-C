#include <stdio.h>

void clear(){
	system("clear");
}

int main(){
	clear();

	struct charmander{
		int vida;
		int ataque1;
		int ataque2;
		int ataque3;
		int ataque4;

		int precision;
		int velocidad;
	}charmander, pikachu;

	int opcionRed;
	int opcionBlue;
	int ataqueR;
	int ataqueA;
	
	printf(" introduce el valor vida de charmander: ");
	scanf("%d", &charmander.vida);
	printf("\n introduce el valor de vida de pikachu: ");
	scanf("%d", &pikachu.vida);	

	charmander.ataque1 = 12;
	charmander.ataque2 = 8;
	charmander.ataque3 = 10;
	charmander.ataque4 = 3;
	charmander.velocidad = 32;
	charmander.precision = 90;

	pikachu.ataque1 = 11;
	pikachu.ataque2 = 7;
	pikachu.ataque3 = 6;
	pikachu.ataque4 = 14;
	pikachu.velocidad = 35;
	pikachu.precision = 86;



	printf("\ninicia\n");
	
	int turno;

	if (charmander.velocidad > pikachu.velocidad){
	  turno = 0;
	}

	else{
	  turno = 1;
	}
	
	while (charmander.vida > 0 && pikachu.vida > 0){

		printf("\nel turno es: %d\n", turno);

		if (turno == 0){
			int opcionRed = 0;
			printf("que ataque usar?: ");
			scanf("%d", &opcionRed);
			
			if (opcionRed == 1){ ataqueR = charmander.ataque1; } 
			else if (opcionRed == 2){ ataqueR = charmander.ataque2; }
			else if (opcionRed == 3){ ataqueR = charmander.ataque3; }
			else if (opcionRed == 4){ ataqueR = charmander.ataque4; }
			else {
				printf("el ataque fallo\n");
				}
				
			printf("pikachu tenia %d de vida pero perdio %d\n", pikachu.vida, ataqueR);
			pikachu.vida = (pikachu.vida - ataqueR);
			printf("pikachu ahora tiene %d\n", pikachu.vida);
			turno = 1;
		}
		else{
			int opcionAzul = 3;
			
			if (opcionAzul == 1){ ataqueA = pikachu.ataque1; } 
			else if (opcionAzul == 2){ ataqueA = pikachu.ataque2; }
			else if (opcionAzul == 3){ ataqueA = pikachu.ataque3; }
			else if (opcionAzul == 4){ ataqueA = pikachu.ataque4; }
			else {
				printf("el ataque fallo\n");
				}
				
			printf("charmander tenia %d de vida pero perdio %d\n", charmander.vida, ataqueA);
			charmander.vida = (charmander.vida - ataqueA);
			printf("charmander ahora tiene %d\n", charmander.vida);
			
			turno = 0;
		}
	}
	printf("\n");
	
	if (charmander.vida > 0){
		printf("charmander gano :D\n");
	}
	else{
		printf("pikachu gano :D\n");
	}
	return 0;
}
