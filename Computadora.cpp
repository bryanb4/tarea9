#include "Computadora.h"

Computadora::Computadora(const string &marca,int ram,const string &almacenamiento, int memoria){

    this->marca = marca;  
    this->ram = ram;
    this->almacenamiento = almacenamiento;
    this->memoria = memoria;

}

void Computadora::setMarca(const string &v){
    marca = v;
}

string Computadora::getMarca(){
    return marca;
}

void Computadora::setRam(int v){
    ram = v;
}

int Computadora::getRam(){
    return ram;
}

void Computadora::setMemoria(int v){
    memoria = v;
}

int Computadora::getMemoria(){
    return memoria;
}

void Computadora::setAlmacenamiento(const string &v){
    almacenamiento = v;
}

string Computadora::getAlmacenamiento(){
    return almacenamiento;
}