/*  VMecanico.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#include "VMecanico.h"

VMecanico::VMecanico(){}

// Lee el dato cédula de identidad
string VMecanico::LeerCedula()
{
   string c;
   cout << "Cedula: ";
   cin >> c;    
   return c;
}

// Lee el dato nombre
string VMecanico::LeerNombre()
{
   string n;       
   cout << "Nombre: ";
   cin.sync(); // blanquea el buffer de entrada
   getline(cin,n);  // lee el string hasta el final de la linea
   return n;
}

/* Lee y valida el dato cantidad de reparaciones.
   NOTA: Se considera que un mecanico puede tener cero reparaciones
         lo cual indica que no trabajo  */
int VMecanico::LeerCantidadReparaciones()
{
   int c;
   do
      { cout << "Cantidad de Reparaciones realizadas: ";
        cin >> c;
        if (c < 0)
            cout<<"\n Dato no valido!"<<endl;
       }while (c < 0);

   return c;
}

// Muestra la información del mecánico
void VMecanico::ImprimirMecanico(string c, string n, float com)
{
   system("cls"); // blanquea ó limpia la pantalla
   cout << "INFORMACION DEL MECANICO" << endl;
   cout << "========================" << endl;
   cout << "Cedula: " << c << endl;
   cout << "Nombre: " << n << endl;
   cout << "Comision: " << setiosflags(ios::fixed) << setprecision(2) << com << " Bs" << endl << endl;
   system("pause"); // hace una pausa, un espere
}
