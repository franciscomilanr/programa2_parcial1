/* Autor: Franciscomilan
	Escuela: Universidad uvm
	Profesor: Armando Cruz
	Materia: Programacion Estructurada
	Ciclo: 01/2022
	Realizado: 03/02/2022
	Descripcion: Programa en C que pide los datos de un triangulo y calcula su area para la materia 	programacion estrcuturada
*/

//Libreria
#include<stdio.h>

//Principal
int main () {
	//Declaracion de variables
	int base,altura;
	float area;

	//Entrada de datos
	printf("Calcular el area del Triangulo");
	printf("Introduce la base:");
	scanf("%d",&base);
	printf("Introduce la altura:");
	scanf("%d",&altura);

	//Proceso
	area=(float)base*altura/2.0;

	//Salida
	printf("El area del triangulo es: %f",area);

	//Retorno 
	return 0;
}