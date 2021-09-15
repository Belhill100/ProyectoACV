#include "View.h"
#include "Archivo.h"

View::View(){
}

void View::mostrarMenu(){
    int opcionMenuPrincipal, opcionMenuSecundario;
    cout << "Menu\n";
    cout << "Digite la opcion segun su tipo de usuario.\n";
    cout << "1. Asistente de posgrado. \n2. Director(a). \n3. Jurado(a). \nOPC: ";
    cin >> opcionMenuPrincipal;
    do{
        // Menu principal para escoger el rol
        switch (opcionMenuPrincipal){
            case 1:
                do{   //Menu secundario con las funcionalidades para ese rol
                    cout << "Menu Asistente de posgrado.\n";
                    cout << "1. Crear acta. \n2. Ver historicos\n3. Salir\nOPC: ";
                    cin >> opcionMenuSecundario;
                    switch (opcionMenuSecundario){
                    case 1:
                        archivoTesis.agregarActa();
                        break;
                    case 2:
                        break;
                    }
                }while (opcionMenuSecundario != 3);
                break;
            case 2:
                do
                {   //Menu secundario con las funcionalidades para ese rol
                    cout << "Menu Director(a).\n";
                    cout << "1. Modificar criterios. \n2. Ver historicos\n3. Salir\n";
                    cin >> opcionMenuSecundario;
                    switch (opcionMenuSecundario){
                    case 1:
                        archivoTesis.modificarCriterio();
                        break;
                    case 2:

                        break;
                    }
                }while (opcionMenuSecundario != 3);
                break;
            case 3:
                do{ //Menu secundario con las funcionalidades para ese rol
                    cout << "Menu Jurado(a).\n";
                    cout << "1. Evaluar trabajo. \n2. Exportar acta.\n0. Salir\n";
                    cin >> opcionMenuSecundario;
                    switch (opcionMenuSecundario){
                    case 1:
                        archivoTesis.calificarActa();
                        break;
                    case 2:
                        archivoTesis.mostrarActa();
                        break;
                    }
                }while (opcionMenuSecundario != 0);
                break;
        }
    } while (opcionMenuPrincipal != 0);
}
