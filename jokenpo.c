#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int verificaganhador(int jogador1escolha, int jogador2escolha){
	
		int resultado = 0;
	
			if(jogador1escolha == 1 && jogador2escolha == 1){
				
				resultado = 3;
				
			}else if(jogador1escolha == 2 && jogador2escolha == 2){
				
				resultado = 3;
					
			}else if(jogador1escolha == 3 && jogador2escolha == 3){
				
				resultado = 3;
				
			}else if(jogador1escolha == 1 && jogador2escolha == 3){
				
				resultado = 1;
				
			}else if(jogador1escolha == 2 && jogador2escolha == 1){
				
				resultado = 1;
				
			}else if(jogador1escolha == 3 && jogador2escolha == 2){
				
				resultado = 1;
				
			}else if(jogador2escolha == 1 && jogador1escolha == 3){
				
				resultado = 2;
				
			}else if(jogador2escolha == 2 && jogador1escolha == 1){
				
				resultado = 2;
				
			}else if(jogador2escolha == 3 && jogador1escolha == 2){
				
				resultado = 2;
				
			}
	
	return(resultado);
}

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	int mododejogo, jogador1escolha, jogador2escolha, maquina, resultado; 
	
	do{
	
	
	printf("***************JOKEN-PÔ***************\n\n");
	
	printf("Escolha	o modo de jogo \n\n1-Jogador contra Jogador\n2-Jogador contra máquina\n3-Sair\n\n");
	scanf("%d",&mododejogo);


	
	system("cls");

	srand(time(NULL));

	switch(mododejogo){
		
		case 1:
		
			printf("***************Jogador 1***************\n\n");
		
			printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
			scanf("%d",&jogador1escolha);
			
			system("cls");
			
			
			sleep(1);
			
			printf("***************Jogador 2***************\n\n");
			
			printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
			scanf("%d",&jogador2escolha);
			
			system("cls");
			
			sleep(1);
			
			resultado = verificaganhador(jogador1escolha, jogador2escolha);
			
			if(resultado == 1){
				
				printf("***************Jogador 1 Venceu***************");
				
			}else if(resultado == 2){
				
				printf("***************Jogador 2 Venceu***************");
				
			}else if(resultado == 3){
				
				printf("***************Empate***************");
				
			}
			
		break;
		
		case 2:
			
			printf("***************Jogador***************\n\n");
		
			printf("Escolha uma das opções\n\n1-Pedra\n2-Papel\n3-Tesoura\n\n");
			scanf("%d",&jogador1escolha);
			
			sleep(1);
			
			maquina = 1 + rand() % 3;
			
			resultado = verificaganhador(jogador1escolha, maquina);
			
			if(resultado == 1){
				
				printf("***************Jogador 1 Venceu***************\n\n");
				
			}else if(resultado == 2){
				
				printf("***************Máquina Venceu***************\n\n");
				
			}else if(resultado == 3){
				
				printf("***************Empate***************\n\n");
				
			}
			
			if(maquina == 1){
				
				printf("A Máquina escolheu: Pedra\n\n");
				
			}else if(maquina == 2){
				
				printf("A Máquina escolheu: Papek\n\n");
				
			}else if(maquina == 3){
				
				printf("A Máquina escolheu: Tesoura\n\n");
				
			}
		
		break;	
			
		case 3:
		
			return(0);
		
		break;	
	}
	
	printf("\n\n");

	system("pause");

	system("cls");


	
	
	
		
}while(1);



}
