/*  Controlador.h
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#ifndef CONTROLADOR_H
#define CONTROLADOR_H
// MTaller incluye a MMecanico y a su vez MMecanico incluye a MRepara

#include "MTaller.h"
#include "VRepara.h"
#include "VMecanico.h"
#include "VTaller.h"

class Controlador
{
   private:
	  MTaller mtall;
   public:
      Controlador();
      void ProcesarMecanicos();
      void ReporteTaller();
};
#endif
