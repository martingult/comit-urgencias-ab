#ifndef SALA_EMERGENCIA_H
#define SALA_EMERGENCIA_H

#include <string>

class SalaEmergencia {
private:
    int salaID;
    std::string tipoSala; // Tratamiento, UCI
    std::string estado; // Disponible, Ocupada

public:
    // Constructor
    SalaEmergencia(int salaID, std::string tipoSala, std::string estado);

    // Métodos
    void asignarSala();
    void liberarSala();
    void consultarSala();
};

#endif // SALA_EMERGENCIA_H
