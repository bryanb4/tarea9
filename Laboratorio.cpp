#include "Laboratorio.h"
#include <fstream>
#include <iostream>

using namespace std;

Laboratorio::Laboratorio(){

    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c){

    if(cont < 5){
        arreglo[cont] = c;
        cont++;
    }else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrarComputadora(){

    cout << left;
    cout << setw(15) << "Marca";
    cout << setw(15) << "Memoria";
    cout << setw(15) << "Ram";
    cout << setw(16) << "almacenamiento";
    cout <<""<<endl;

    for(size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        
        cout<<"Componentes de la computadora "<<i+1<<endl;
        cout << c;
        cout<<" "<<endl;
       
        


    }
}
void Laboratorio::respaldar_tabla(){

    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(15) << "Marca";
        archivo << setw(15) << "Memoria";
        archivo << setw(15) << "Ram";
        archivo << setw(15) << "almacenamiento";
        archivo <<""<<endl;

        for(size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
            archivo << c;


        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){

    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
 
            archivo << c.getMarca() << endl;;
            archivo << c.getRam() << endl;
            archivo << c.getMemoria() << endl;
            archivo << c.getAlmacenamiento() << endl;
        }
    }
    archivo.close();
}
void Laboratorio::recuperar(){
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int ram;
        int memoria;
       
        Computadora c;

        while(true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setMarca(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            getline(archivo, temp);
            memoria = stoi(temp);
            c.setMemoria(memoria);

            getline(archivo, temp);
            c.setAlmacenamiento(temp);

            agregarComputadora(c);

            
        }
    }
    archivo.close();
}