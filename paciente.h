#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>

class Paciente {
private:
    std::string nombre;
    int ID;
    int edad;
    std::string direccion;
    int nivelGravedad; // 1 (menos grave) a 5 (muy grave)
    std::string estado; // En espera, En tratamiento, Dado de alta

public:
    // Constructor
    Paciente(std::string nombre, int ID, int edad, std::string direccion, int nivelGravedad, std::string estado);

    // Métodos
    void agregarPaciente();
    void modificarPaciente();
    void eliminarPaciente();
    void consultarPaciente();
};

#endif // PACIENTE_H
