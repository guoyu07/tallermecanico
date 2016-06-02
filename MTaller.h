/*  MTaller.h
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#ifndef MTaller_H
#define MTaller_H
#include "MMecanico.h"
class MTaller
{
   private:
      float mayor;
   public:
      MTaller();       
      void SetMayor(float m);
      float GetMayor();
      void ProcesarTrabajoMecanico(MMecanico meca); // Relación uso con MMecanico
};
#endif
