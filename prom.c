/*
 * prom.c - imprime aprobado o reprobado segun el promedio.
 * usa El operador ( ? : ) en una sola linea y almacena en una 
 * variable de cadena resultado.
 *
 * Fecha: 5-05-2022
 *
 */

#include <stdio.h>

int main()
{
	float promedio ;
	char *resultado ;
	printf("Ingrese promedio: "); scanf("%f", &promedio);
	resultado = (promedio > 5.9) ? "Aprobado" : "Reprobado" ;
	printf("%s\n", resultado);

	return 0;
}
