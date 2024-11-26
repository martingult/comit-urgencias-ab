#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico {
private:
    std::string nombre;
    int ID;
    std::string especialidad;
    std::string horarioTurno;

public:
    // Constructor
    Medico(std::string nombre, int ID, std::string especialidad, std::string horarioTurno);

    // Métodos
    void agregarMedico();
    void asignarPaciente();
    void consultarMedico();
};

#endif // MEDICO_H
