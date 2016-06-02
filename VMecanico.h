/*  VMecanico.h
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#ifndef VMecanico_H
#define VMecanico_H
#include <iostream> // Entradas y Salidas
#include <cstdlib>  // Uso de system
#include <iomanip> // Imprimir valores float con precisión en los decimales
using namespace std;

class VMecanico
{
   public:
      VMecanico();
      string LeerCedula();
      string LeerNombre();
      int LeerCantidadReparaciones();
      void ImprimirMecanico(string c, string n, float co);
};
#endif

