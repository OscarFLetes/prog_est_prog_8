/*Autor: Oscar Eduardo FLetes Ixta, realizado el 14/02/2022
	Programa para una distribuidora de equipo de computo, la cual maneja 2 precios
		-Si estas dado de alta como distribuidor, los precios tienen 10% de descuento
		-Si eres un cliente normal, los precios son sin descuento.
	El programa pregunta al inicio si eres distribuidor o un cliente normal,
	y despues preguntara a pagar debe calcular descuento y total.
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate, int
		-scanf
		-Operacones aritmeticas 
		-Uso de condiciones 
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables flotantes y int, como declararlas, pedirlas por teclado, usar condiciones,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 2 variables de tipo int, y float (tipo de cliente, y cantidad a pagar),
	El programa pide e imprime que tipo de cliente es, si es distribuidor se le hace un descuento del 10%, y si es cliente normal, no se le hace ningún descuento
*/



#include<stdio.h>

int main(){
	//Variables
	int tipo; //variable numero entero 
	float cantidad, descuento=0, total; //variable con decimal
	//Entrada
	printf("Introduce el tipo de cliente (1.Distribuidor, 2.CLiente normal)"); //imrpime mensaje
	scanf("%d",&tipo); //lee la opcion ya sea 1 o 2
	printf("Cantidad a pagar: \t $");
	scanf("%f",&cantidad); ////lee el numero insertado por el teclado
	//Proceso
	if(tipo==1){ //condicion que si tipo es igual a la opcion 1
		descuento=cantidad*0.1; //usa esta ecuacion
	}
	else if(tipo==2){ //Condicion que y si tipo es igual a la opcion 2 
		total=cantidad-descuento; //usa esta ecuacion
	}
	//Salida
	printf("descuento:\t\t-$%.2f\n",descuento); //imprime la salida del descuento
	printf("\t\t\t---------------\n"); //tabulaciones y formato 
	printf("total:\t\t\t $%.2f",total); //Imprime la salida del total 
	
	return 0;
}
