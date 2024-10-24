#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

int showstabs (int num){
	
	int res,cont;
	res = cont*num;
	for(cont = 0; cont <= 10; cont ++){
		
		printf("\n%i X %i = %i\n", num, cont, cont*num);
		
	}
	return (res);
}

main(){
	setlocale(LC_ALL, "portuguese");
	
		int numero;
		
		printf("Informe um número: \n");
		scanf("%i", &numero);
		fflush(stdin);
		
		//Chamada da função
		showstabs(numero);
}
