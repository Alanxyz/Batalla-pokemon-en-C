#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void clear(){
	system("clear");
}

void sleep(int a){
	time_t t1,t2;
	t1 = time(NULL);
    t2 = time(NULL);
	while ((t2 - t1)*1000 < a)
	t2 = time(NULL);
}

int aleatorio(){
	int numero;
	srand(time(NULL));
	numero = 1 + rand() % ((4 + 1) - 1);
	return numero;
}

int atino(){
	int numero;
	srand(time(NULL));
	numero = 1 + rand() % ((100 + 1) - 1);
	return numero;
}



int main(){

	clear();
	printf("\n");
	printf("ooooooooo.            oooo                                                      \n");
	printf("`888   `Y88.          `888                                                      \n");
	printf(" 888   .d88' .ooooo.   888  oooo   .ooooo.  ooo..oo. .oo.    .ooooo.  ooo. .oo. \n");
	printf(" 888ooo88P' d88' `88b  888 .8P'   d88' `88b `888PY88bPY88b  d88' `88b `888P'Y88b\n");
	printf(" 888        888   888  888888.    888ooo888  888  888  888  888   888  888   888\n");
	printf(" 888        888   888  888 `88b.  888    .o  888  888  888  888   888  888   888\n");
	printf("o888o       `Y8bod8P' o888o o888o `Y8bod8P' o888  888o 888o `Y8bod8P' o888o o888\n");
    printf("                                 =============\n");
    printf("                                 ASCII VERSION \n");
    printf("                                 =============\n\n");
    
    int menu;

    printf("1) Iniciar\n");
   	printf("2) Ayuda\n");
   	printf("3) Informacion\n\n--> ");
   	scanf("%i", &menu);

  	if (menu == 1){
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
		int p;
		
		while (charmander.vida > 0 && pikachu.vida > 0){
			sleep(1000);
			printf("\nel turno es: %d\n", turno);
			if (turno == 0){
			menua:
				opcionRed = 0;
				printf("que ataque usar?: ");
				scanf("%d", &opcionRed);
				
				if (opcionRed == 1){ ataqueR = charmander.ataque1; } 
				else if (opcionRed == 2){ ataqueR = charmander.ataque2; }
				else if (opcionRed == 3){ ataqueR = charmander.ataque3; }
				else if (opcionRed == 4){ ataqueR = charmander.ataque4; }
				else {
					printf("ninguno seleccionado\n");
					goto menua;
					}
				p = (atino());

				sleep(1000);
				{
					
				};
				if (p < charmander.precision){
					printf("pikachu tenia %d de vida pero perdio %d\n", pikachu.vida, ataqueR);
					pikachu.vida = (pikachu.vida - ataqueR);
					sleep(1000);
					printf("pikachu ahora tiene %d\n", pikachu.vida);
				}
				else{ printf("el ataque fallo\n"); }				
				turno = 1;
			}
			else{

				sleep(1000);
				int opcionAzul = (aleatorio());
				
				if (opcionAzul == 1){ ataqueA = pikachu.ataque1; } 
				else if (opcionAzul == 2){ ataqueA = pikachu.ataque2; }
				else if (opcionAzul == 3){ ataqueA = pikachu.ataque3; }
				else if (opcionAzul == 4){ ataqueA = pikachu.ataque4; }
				else {

					printf("el ataque fallo\n");
				}

				p = (atino());

				if (p < pikachu.precision){
					printf("charmander tenia %d de vida pero perdio %d\n", charmander.vida, ataqueA);
					sleep(1000);
					charmander.vida = (charmander.vida - ataqueA);
					printf("charmander ahora tiene %d\n", charmander.vida);
				}
				else { printf("el ataque fallo\n"); }

				turno = 0;
			}
		}
		printf("\n");
		sleep(1000);
		if (charmander.vida > 0){
			printf("charmander gano :D\n");
		}
		else{
			printf("pikachu gano :D\n");
		}
	}




	
	return 0;
}
