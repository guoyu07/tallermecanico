/*  VTaller.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */
#include "VTaller.h"

VTaller::VTaller(){}

void VTaller::ImprimirMayor(float m)
{
   system("cls");
   cout << "\n\n Mayor monto total de comision: " << setiosflags(ios::fixed) << setprecision(2) << m << endl << endl;
   system("pause");
}
