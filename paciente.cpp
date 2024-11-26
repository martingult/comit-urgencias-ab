#include "Paciente.h"
#include <iostream>

// Constructor
Paciente::Paciente(std::string nombre, int ID, int edad, std::string direccion, int nivelGravedad, std::string estado)
    : nombre(nombre), ID(ID), edad(edad), direccion(direccion), nivelGravedad(nivelGravedad), estado(estado) {}

// Métodos
void Paciente::agregarPaciente() {
    std::cout << "Paciente agregado: " << nombre << " (ID: " << ID << ")\n";
}

void Paciente::modificarPaciente() {
    std::cout << "Paciente " << nombre << " modificado.\n";
}

void Paciente::eliminarPaciente() {
    std::cout << "Paciente " << nombre << " eliminado.\n";
}

void Paciente::consultarPaciente() {
    std::cout << "Información del paciente:\n";
    std::cout << "Nombre: " << nombre << ", ID: " << ID << ", Nivel de gravedad: " << nivelGravedad << ", Estado: " << estado << "\n";
}
