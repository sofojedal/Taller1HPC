/****************
 * Taller No. 1, Primer Corte HPC
 * Punto 9
 * Autor: Laura Sofía Ojeda León
 * **************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
  int n, i, j, aux;

  std::cout << "Ingrese el valor de n: ";
  std::cin >> n;

  for (i=1; i<=n; i++) {
      for(j=1; j<=n-i; j++){

          std::cout << "  ";
      }
      //controla el primer numero del lado izquierdo
      aux=i;
      // controla cuando son mas de 9 filas
      if(i>9){
         aux=(aux-11)+1;
      }
      // controla cuando son mas de 19 filas
      if(i>19){
         aux=(aux-10);
      }

      for(j=1; j<=i; j++){
        std::cout << " " <<aux;
        aux=aux+1;
        if(aux>9){  // Ajusta auxiliar cuando auxiliar es 10
            aux=0;
         }
        }

//controla el primer numero del lado derecho
     if(aux==0){
        aux=8;
     }
     else {
         aux=aux-2;
     }

        if(i>=2){
            for(j=1; j<=i-1; j++){
              std::cout << " " <<aux;

              if(aux==0){  // ajusta auxiliar cuando es 0
                  aux=9;
               }
              else{
                 aux=aux-1;
              }

              }
        }
        std::cout << std::endl;
    }
}
