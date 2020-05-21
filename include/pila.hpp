#ifndef PILA_HPP
#define PILA_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
// using namespace std;

//CLASES
class Estudiante {
    public:
        Estudiante() = default;
        Estudiante(const Estudiante& e) = default;
        Estudiante(const unsigned c, const std::string& n, const unsigned i, const bool e);
        virtual ~Estudiante() = default;
        void setCodigo(const unsigned codigo);
        void setNombre(const std::string& nombre);
        void setNombre(const std::string&& nombre);
        void setIngreso(const unsigned ingreso);
        void setEgresado(const bool egresado);
        std::string getNombre();
        unsigned getIngreso();
        unsigned getCodigo();
        bool getEgresado();
        void printStudent();

    private:
        unsigned codigo;
        unsigned ingreso;
        bool egresado;
        std::string nombre;
};

class PilaEstatica {
    private:
        unsigned cont = 0;
        // Estudiante pE[100];
        std::vector<Estudiante> pE;

    public:
        PilaEstatica() = default;
        PilaEstatica(const PilaEstatica& p) = default;
        virtual ~PilaEstatica() = default;
        void push(Estudiante&& e);
        void push(const Estudiante& e);
        void apilar();
        void printStack();
};

#endif /* ifndef PILA_HPP */
