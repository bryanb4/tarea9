#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iomanip>

#include <iostream>
using namespace std;

class Computadora{
    
private:
    string marca;
    int ram;
    string almacenamiento;
    int memoria;
public:
    Computadora(){};
    Computadora(const string &marca,int ram,const string &almacenamiento, int memoria); 

    void setMarca(const string &v);
    string getMarca();

    void setRam(int v);
    int getRam();

    void setAlmacenamiento(const string &v);
    string getAlmacenamiento();

    void setMemoria(int v);
    int getMemoria();   

    friend ostream& operator<<(ostream &out, const Computadora &v){
        
        out << left;
        out << setw(15) << v.marca;
        out << setw(15) << v.memoria;
        out << setw(15) << v.ram;
        out << setw(15) << v.almacenamiento;
        out << endl;

        return out;
    }

    friend istream& operator >>(istream &in, Computadora &v){

        cout << "Marca: ";
        getline(cin, v.marca);

        cout << "Memoria: ";
        cin >> v.memoria;

        cout << "Ram: ";
        cin >> v.ram;
        fflush(stdin);

        cout << "almacenamiento: ";
        getline(cin, v.almacenamiento);
        cout<<""<<endl;
        
        return in;
    }

};

#endif