/*  MRepara.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */
#include "MRepara.h"

MRepara::MRepara(){}

void MRepara::SetTipoReparacion(int t)
{
     tipo_reparacion = t;
}
void MRepara::SetMontoReparacion(float m)
{
     monto_reparacion = m;
}
int MRepara::GetTipoReparacion()
{
      return tipo_reparacion;
}
float MRepara::GetMontoReparacion()
{
      return monto_reparacion;
}

/* Calcula la comision respectiva a la reparacion realizada
   según el tipo de reparacion y el monto de la misma*/
float MRepara::ComisionReparacion()
{  float comi;
   switch (tipo_reparacion)
   {    case 1 : comi = monto_reparacion* 0.1;
                 break;
        case 2 : comi = monto_reparacion* 0.2;
                 break;
        case 3 : comi = monto_reparacion* 0.15;
                 break;
   }
   return comi;
}

