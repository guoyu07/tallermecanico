/* Controlador.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#include "Controlador.h"
// Constructor
Controlador::Controlador(){}

// Permite procesar el trabajo realizado por los mecanicos
void Controlador::ProcesarMecanicos()
{
   float mon;
   string ced, nom;
   int cant,resp,tip;
   MRepara mrep;     // Relación de Agregación
   MMecanico mmeca;  // con las clases MRepara, MMecanico
   VRepara vrep;     // VRepara y VMecanico
   VMecanico vmeca;
   //ciclo para procesar varios mecanicos  
   do
   {
      system("cls");
      cout << "DATOS DEL MECANICO" << endl;
      cout << "==================" << endl;
      /*Se solicita  al objeto (vmeca) de la clase
      VMecanico que proceda a leer cada dato del mecanico */
      ced = vmeca.LeerCedula();
      nom = vmeca.LeerNombre();
      cant = vmeca.LeerCantidadReparaciones();
      /* Se le da estado al objeto (mmeca) de la clase MMecanico.
         La comision del mecanico comenzará en cero,
         lo cual indica que no ha realizado ninguna reparacion*/
      mmeca.SetCedula(ced);       // atributos del objeto mmeca se llenan con
      mmeca.SetNombre(nom);       // los datos leidos por la vista vmeca
      mmeca.SetCantRepara(cant);
      mmeca.SetAcMontoComision(0);  /* atributo acumulador inicializado en cero,
                                       se ira actualizando a medida que se
                                       procesen las reparaciones,
                                       pero debe ser inicializado en cero
                                       para cada mecánico */
      //ciclo para procesar las reparaciones del mecanico
      cout << endl << endl << "DATOS DE LAS REPARACIONES" << endl;
      cout << "=========================" << endl;
      for (int i = 0; i < cant; ++i)          
      {
         //Se solicita  al objeto (vrep) de la clase vrepara el tipo de reparacion realizada
         tip = vrep.LeerTipoReparacion();
         //Se solicita  al objeto (vrep) de la clase vrepara el monto cobrado por la reparacion
         mon = vrep.LeerMontoReparacion();
         //Se le da estado al objeto (mrep) de la clase MRepara
         mrep.SetTipoReparacion(tip);
         mrep.SetMontoReparacion(mon);
         /* Se pasa como parametro el objeto (mrep) de la clase MRepara para que lo procese.
            El mecanico calcula la comision de la reparación */
         mmeca.ProcesarReparacion(mrep); /* metodo encargado de actualizar el atributo ac_montocomision
                                            del mecanico (Relacion de uso MMecanico con MRepara) */
      }
      // Se imprime la salida del mecanico
      vmeca.ImprimirMecanico(mmeca.GetCedula(),mmeca.GetNombre(),mmeca.GetAcMontoComision());     
      mtall.ProcesarTrabajoMecanico(mmeca); /* metodo encargado de actualizar el atributo
                                               mayor de la clase MTaller 
                                               (Relacion de uso MTaller con MMecanico) */
      cout << "\n\n\n Hay otro mecanico? [1]SI [2]No : ";
      cin >> resp;
   }
   while (resp == 1);  
}

void Controlador::ReporteTaller()
{

   VTaller vtall;	// relación de agregación con VTaller

   /* Se solicita al objeto de la clase Mtaller la información
      de la mayor comisión y esta se envía por parámetro al método
      del objeto de la clase VTaller para que la imprima */
   vtall.ImprimirMayor(mtall.GetMayor());
}
