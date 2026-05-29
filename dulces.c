#include <stdio.h>

/* Declaramos el prototipo de la funcion reparto_dulces() 
 *
 * Parametros:
 * cantidad (int) Cantidad de dulces que tiene el profesor
 * cantidad_ninos (int) cantidad del ninos del grupo.
 *
 * */  
int reparto_dulces (int cantidad_de_dulces, int cantidad_de_ninos, int *sobrantes) ;

int main()
{
   int CantidadDulces, CantidadNinos; 
   int Sobrantes ;  // se pasa por referencia a la funcion reparto_dulces
   int Resultado;  //valor de retorno de la funcion reparto_dulces()
  
   printf("Por favor, introduce la cantidad de dulces que tiene el profesor: "); scanf("%d", &CantidadDulces) ;
   printf("Por favor, introduce la cantidad de ninos en el salon de clases: ");  scanf("%d", &CantidadNinos)  ;

   printf("Cantidad de Dulces: %d -- Cantidad de Ninos: %d\n", CantidadDulces, CantidadNinos) ;

   Resultado = reparto_dulces(CantidadDulces, CantidadNinos, &Sobrantes) ;
   printf("Cada alumno recibe: %d, y sobran %d\n", Resultado, Sobrantes) ;

   

   return 0;

}

/* function devuelve entero */
int reparto_dulces (int cantidad_de_dulces, int cantidad_de_ninos, int *sobrantes) 
{
  int CantidadeDulcesPorAlumno ;

  if (cantidad_de_ninos <= 0){
     *sobrantes = cantidad_de_dulces ;
     return 0;
  }

  CantidadeDulcesPorAlumno = cantidad_de_dulces / cantidad_de_ninos ;
  // El operador % es resto en C 
  *sobrantes = cantidad_de_dulces % cantidad_de_ninos ;

  //regresa la cantidad de dulces por alumno y el sobrante 
  return CantidadeDulcesPorAlumno ;
}
