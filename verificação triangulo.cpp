#include <stdio.h>

int main(){
	
	int ladoA, ladoB, ladoC;
	
	printf("Informe o lado A: ");
	scanf("%i",&ladoA);
	printf("Informe o lado B: ");
	scanf("%i",&ladoB);
	printf("Informe o lado C: ");
	scanf("%i",&ladoC);
	
	//triangulo: a<b+c && b<a+c && c<a+b
	//equilatero: a = b && b = c
	
	//verificando se é um triangulo
	if(ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC<ladoA+ladoB){ //agora, verificação se é equilatero, isosceles ou escaleno
		if(ladoA == ladoB && ladoB == ladoC){
			printf("Triangulo equilatero");
		}else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){ //isosceles
			printf("Triangulo isosceles");
		}else{
			printf("Triangulo escaleno"); //escaleno
		}
	}else{
		printf("Estes valores nao formam um triangulo!");
	}
	
	return 0;
	
}