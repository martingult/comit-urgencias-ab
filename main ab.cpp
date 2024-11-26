#include <iostream>
#include "Paciente.h"
#include "Medico.h"
#include "SalaEmergencia.h"

void mostrarMenu() {
    std::cout << "================ Sistema de Emergencias =================\n";
    std::cout << "1. Agregar Paciente\n";
    std::cout << "2. Modificar Paciente\n";
    std::cout << "3. Consultar Paciente\n";
    std::cout << "4. Salir\n";
    std::cout << "========================================================\n";
    std::cout << "Elija una opción: ";
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
        case 1: {
            Paciente p("Juan Perez", 1, 30, "Calle Falsa 123", 3, "En espera");
            p.agregarPaciente();
            break;
        }
        case 2: {
            Paciente p("Juan Perez", 1, 30, "Calle Falsa 123", 3, "En espera");
            p.modificarPaciente();
            break;
        }
        case 3: {
            Paciente p("Juan Perez", 1, 30, "Calle Falsa 123", 3, "En espera");
            p.consultarPaciente();
            break;
        }
        case 4:
            std::cout << "Saliendo del sistema...\n";
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}
