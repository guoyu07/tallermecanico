/*  VRepara.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */
#include "VRepara.h"

VRepara::VRepara(){}

// Lee y valida el dato tipo de reparación. Valor entre 1 y 3
int VRepara::LeerTipoReparacion()
{
   int t;
   do
    {  cout << "Tipo Reparacion (1. Electrica, 2. Tren Delantero, 3. Frenos): ";
       cin >> t;
	   if (t < 1 or t > 3)
          cout<<"\n Dato no valido!"<<endl;
    }while (t < 1 or t > 3);
   return t;
}

// Lee y valida el dato monto de la reparación. Valor mayor que cero
float VRepara::LeerMontoReparacion()
{
   float m;
   do
    { cout << "Monto (BsF): ";
      cin >> m;
      if (m <= 0)
          cout<<"\n Dato no valido!"<<endl;
     }while (m <= 0);
   return m;
}
