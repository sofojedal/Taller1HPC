/****************
 * Taller No. 1, Primer Corte HPC
 * Punto 6
 * Autor: Laura Sofía Ojeda León
 * **************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {

    std::cout <<"Punto 6" <<std::endl;

   int a, b, c, z, h;

   std::cout<<"Digite un número para la variable a" <<std::endl;
   scanf("%d", &a);
   if(a<0){
       std::cout<<"Por favor ingresar un número positivo para a" <<std::endl;
       scanf("%d", &a);
   }
   std::cout<<"Digite un número para la variable b" <<std::endl;
   scanf("%d", &b);
   if(b<0){
       std::cout<<"Por favor ingresar un número positivo para b" <<std::endl;
       scanf("%d", &b);
   }

   if(b<a){
       c=b;
       b=a;
       a=c;
       std::cout<<"a: " << a<<std::endl;
       std::cout<<"b: " << b<<std::endl;
   }
       for(int i=a; i<=b; i++){
           //std::cout<<"i: "<<i <<std::endl;
           h = i%5;
           if (h==0){
               z=z+i;
               //std::cout<<"z: " << z<<std::endl;
           }
       } std::cout<<"Total sumatoria de a hasta b : " << z<<std::endl;
   }

