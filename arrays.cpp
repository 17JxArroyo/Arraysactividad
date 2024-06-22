//Nombre: Joseph Arroyo
//Fecha: 22/06/2024
//tema: Arrays
#include<iostream>
using namespace std;

main()
{
    int edades[] = {21, 18, 17, 22, 25}; //Tamano del vector: 5

    cout<<endl<<"El valor de la posicion 4 es"<<edades[4];
    cout<<endl<<"El valor de la posicion 4 es"<<edades[0];
    cout<<endl<<"El valor de la posicion 4 es"<<edades[4/2];

    //Vector de cadenas de caracteres
    string ciudades[] = {"Esmeraldas", "Quito", "Cuenca", "Ambato", "Portoviejo"};
    //Imprimiendo todos los elementos de el vector ciudades
    for(int k=0; k<5; k++)
    {
        cout<<endl<<ciudades[k];
    }

    //Vector de double
    double temperaturas[6];
    //lectura por teclado
    cout<<endl<<"Ingrese loss valores por teclado: "<<endl;
    for(int k=0; k<6; k++)
    {
        cout<<"Ingrese la temperatura # "<<k+1<< " : ";
        cin>>temperaturas[k];

    }

    //Imprimir el vector de temperaturas
    cout<<endl<<endl<<"Las tempeaturas ingresadas son:"<<endl;
    for(int k=0; k<6; k++)
    {
        cout<<temperaturas[k]<< " ";
    }
    return 0;
}