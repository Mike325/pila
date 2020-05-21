#include <iostream>

using namespace std;

//CLASES
class Estudiante
{
    private:
        int codigo;
        string nombre;
        int ingreso;
        bool egresado;

    public:
        void setCodigo(int);
        int getCodigo();
        void setNombre(string);
        string getNombre();
        void setIngreso(int);
        int getIngreso();
        void setEgresado(bool);
        bool getEgresado();
};

class PilaEstatica
{
    private:
        int cont;
        Estudiante pE[100];
    public:
        PilaEstatica();
};

//SET & GET estudiante.cpp

Estudiante::Estudiante()
{
    Estudiante pE[100];
}

void Estudiante::setCodigo(int _codigo)
{
    codigo = _codigo;
}

int Estudiante::getCodigo()
{
    return codigo;
}

void Estudiante::setNombre(string _nombre)
{
    nombre = _nombre;
}

string Estudiante::getNombre()
{
    return nombre;
}

void Estudiante::setIngreso(int _ingreso)
{
    ingreso = _ingreso;
}

int Estudiante::getIngreso()
{
    return ingreso;
}

void Estudiante::setEgresado(bool _egresado)
{
    egresado = _egresado;
}

bool Estudiante::getEgresado()
{
    return egresado;
}

//listaestatica.cpp
PilaEstatica::PilaEstatica()
{
    cont = 0;
}


//MAIN.CPP

void apilar(PilaEstatica& pE);

int main()
{
    apilar(pE);
    return 0;
}

void apilar(PilaEstatica& pE){
    int codigo;
    string nombre;
    int ingreso;
    bool egresado;

    cout<<"Codigo: ";
    cin>>codigo;
    cout<<"\nNombre (sin espacios): ";
    cin>>nombre;
    cout<<"\nIngreso (numerico):";
    cin>>ingreso;
    cout<<"Egresado (1 = Si, 0 = No):";
    cin>>egresado;
    Estudiante e(codigo, nombre, ingreso, egresado);
    pE.push(e);
}
