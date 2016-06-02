/*  MMecanico.h
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#ifndef MMecanico_H
#define MMecanico_H
#include <string>
#include "MRepara.h"
using namespace std;

class MMecanico
{
      private:
        string cedula;
        string nombre;
        int cant_repara;
        float acmonto_comision;
      public:
        MMecanico();
        void SetCedula(string c);
        void SetNombre(string n);
        void SetCantRepara(int c);
        void SetAcMontoComision(float mc);
        string GetCedula();
        string GetNombre();
        int GetCantRepara();
        float GetAcMontoComision();
        void ProcesarReparacion(MRepara reparacion); // Relación Uso con MRepara
};
#endif
