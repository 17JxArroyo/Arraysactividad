//Nombre: Joseph Arroyo
//Fecha: 22/06/2024
//tema: Funciones con arrays
//Disene el programa que lea las edades de c=7 estudiantes, y a continuacion 
//calcule el promedio de las mismas.
//utilice arreglos y funciones.
#include<iostream>
using namespace std;

void LeerEdades(int edades[], int total)
{
    cout<<endl<<"Ingreso de edades "<<endl;
    for(int k=0; k<total; k++)
    {
        cout<<"Ingrese la edad del estudiantes #1 : ";
        cin>>edades[k];
    }
}
//Imprime el vector de edades
void ImprimirEdades(int edades[] , int total)
{
    cout<<endl<<"Listado de edades ingresadas"<<endl;
    for(int k=0; k<total; k++)
    {
        cout<<edades[k]<<" ";
    }
}

//Calcula el promedio de las edades
double PromedioEdades(int edades[], int total)
{
    double suma = 0;
    for(int k=0; k<total; k++)
        suma += edades[k];

    return suma/total;
}

int main()
{
    const int MAX=7;
    int edades[MAX];

    LeerEdades(edades, MAX);
    ImprimirEdades(edades, MAX);
    double prom = PromedioEdades(edades, MAX);
    cout<<endl<<"El promedio de las edades es: "<<prom;

    return 0;
}