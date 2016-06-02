/*  MMecanico.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#include "MMecanico.h"

// Constructor que inicializa el atributo ac_montocomsion
MMecanico::MMecanico()
{
   acmonto_comision = 0;
}
void MMecanico::SetCedula(string c)
{
   cedula = c;
}
void MMecanico::SetNombre(string n)
{
   nombre = n;
}
void MMecanico::SetCantRepara(int c)
{
   cant_repara = c;
}
void MMecanico::SetAcMontoComision(float mc)
{
   acmonto_comision = mc;
}
string MMecanico::GetCedula()
{
   return cedula;
}
string MMecanico::GetNombre()
{
   return nombre; 
}
int MMecanico::GetCantRepara()
{
   return cant_repara;
}   
float MMecanico::GetAcMontoComision()
{
   return acmonto_comision;
}
/* Método que actualiza el atributo ac_montocomision
   con la reparación (Relación Uso con MRepara) */
void MMecanico::ProcesarReparacion(MRepara reparacion)
{
     acmonto_comision += reparacion.ComisionReparacion();
}
