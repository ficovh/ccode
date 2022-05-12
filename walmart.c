
/*
Nombre: Isabel Valladolid Dillanes
Fecha: 12/05/2022
Escuela: Instituto Blaise Pascal
Desripcion:

En Walmart hay promociones en los helados Nestle de 2 lts.
La promoción es 2X1 y el costo de cada bote es de $83.30, 
pero si lleva un numero impar de botes de helado, no se aplicará ninguna promoción

a) Realice un programa en lenguaje C que pregunte al usuario el número botes de 1 lt de helado
   y si es un numero par de botes de helado, se aplicará la promocion, si no
b) Si la cantidad de botes de helado de 1lt es impar, se cobrará el número de 
   helados tomando en cuenta la parte entera del cociente(DIV) +1.

Ejemplo, si lleva 3 botes (3÷2=1.5) se toma 1 y se le suma 1 (1+1=2), por lo tanto se cobran 2 botes de helado 

*/

#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int cant, parte_entera; //Declaracion de variable para almacenar el numero de helados
	float total, total2;


	printf("Indique el numero de botes de helado de 1 lt: "); // Solicita el numero de botes
	scanf("%d",&cant); //Solicita el numero de botes y almacena en cant
	// Si el residuo es cero el numero de botes es par
	if((cant%2)==0) {
		total=(cant/2)*83.30;
		printf("Total es igual a : %0.2f", total);
	}
	else { // es impar
		parte_entera = (cant / 2) ;
		printf("Se cobraran %d Botes de Lt. \n",parte_entera );
	    printf("Total es igual a : %0.2f", (parte_entera +1) * 83.30);
	}
	return 0;
}
