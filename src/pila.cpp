#include <iostream>
#include <utility>
#include "pila.hpp"

// using namespace std;

void PilaEstatica::printStack() {
    std::for_each(
        this->pE.begin(),
        this->pE.end(),
        [](Estudiante& estudiante){
           estudiante.printStudent();
        }
    );
}

void Estudiante::printStudent() {
    std::cout<< "Codigo:   " << this->codigo   << '\n';
    std::cout<< "Nombre:   " << this->nombre   << '\n';
    std::cout<< "Ingreso:  " << this->ingreso  << '\n';
    std::cout<< "Egresado: " << this->egresado << '\n';
}

void PilaEstatica::push(const Estudiante& estudiante) {
    this->pE.push_back(estudiante);
    this->cont++;
}

void PilaEstatica::push(Estudiante&& estudiante) {
    this->pE.push_back(std::move(estudiante));
    this->cont++;
}

void PilaEstatica::apilar() {
    unsigned codigo;
    std::string nombre;
    unsigned ingreso;
    bool egresado;

    std::cout<<"Codigo: ";
    std::cin>>codigo;
    std::cout<<"Nombre (sin espacios): ";
    std::cin>>nombre;
    std::cout<<"Ingreso (numerico): ";
    std::cin>>ingreso;
    std::cout<<"Egresado (1 = Si, 0 = No): ";
    std::cin>>egresado;

    this->push({codigo, nombre, ingreso, egresado});
}

Estudiante::Estudiante(const unsigned codigo, const std::string& nombre, const unsigned ingreso, const bool egresado) {
    this->codigo   = codigo;
    this->nombre   = nombre;
    this->ingreso  = ingreso;
    this->egresado = egresado;
}

void Estudiante::setCodigo(const unsigned codigo) {
    this->codigo = codigo;
}

unsigned Estudiante::getCodigo() {
    return this->codigo;
}

void Estudiante::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Estudiante::setNombre(const std::string&& nombre) {
    this->nombre = std::move(nombre);
}

std::string Estudiante::getNombre() {
    return this->nombre;
}

void Estudiante::setIngreso(const unsigned ingreso) {
    this->ingreso = ingreso;
}

unsigned Estudiante::getIngreso() {
    return this->ingreso;
}

void Estudiante::setEgresado(const bool egresado) {
    this->egresado = egresado;
}

bool Estudiante::getEgresado() {
    return this->egresado;
}
