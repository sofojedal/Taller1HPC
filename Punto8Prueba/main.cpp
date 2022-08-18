/****************
 * Taller No. 1, Primer Corte HPC
 * Punto 8
 * Autor: Laura Sofía Ojeda León
 * **************/


#include <iostream>

using namespace std;

int main()
{
    int dia, mes, anio, suma1, suma2, suma3, suma4;
    std::cout <<"Ingrese el dia de su nacimiento " <<std::endl;
    scanf("%d", &dia);
    std::cout <<"Ingrese el mes de su nacimiento " <<std::endl;
    scanf("%d", &mes);
    std::cout <<"Ingrese el año de su nacimiento " <<std::endl;
    scanf("%d", &anio);

    std::cout <<"Fecha de Nacimiento: "<<dia <<"/"<< mes <<"/" <<anio<<std::endl;
    suma1= dia + mes + anio;
    std::cout <<"Suma1: "<<suma1<<std::endl;
    //Crea vector para suma1
    int cifras[5];
    int i=0;
  //Ubica en el vector cifras suma1 al reves
    while(suma1>0){
        cifras[i] = suma1%10;
        suma1 = suma1/10;
        i++;
    }
    //Imprime el vector a la inversa para que quede en orden, y suma los números de suma1
    for(int s = i-1 ; s>=0; s--){
        std::cout <<cifras[s]<<std::endl;

        suma2 = cifras[s] + suma2;
    }std::cout <<"Suma2: "<<suma2<<std::endl;

    //Crea vector para suma2
    int cifras2[5];
    int i2=0;

    //Ubica en el vector cifras suma2 al reves
    while(suma2>0){
        cifras2[i2] = suma2%10;
        suma2 = suma2/10;
        i2++;
    }

    //Imprime el vector a la inversa para que quede en orden, y suma los números de suma2
    for(int s2 = i2-1 ; s2>=0; s2--){
        std::cout <<cifras2[s2]<<std::endl;

        suma3 = cifras2[s2] + suma3;
    }std::cout <<"Suma3: "<<suma3<<std::endl;
}
