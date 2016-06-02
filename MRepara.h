/*  MRepara.h
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#ifndef MREPARA_H
#define MREPARA_H
class MRepara
{
   private:
      int tipo_reparacion;     
      float monto_reparacion;
   public:
      MRepara();       
      void SetTipoReparacion(int t);
      void SetMontoReparacion(float m);
      int GetTipoReparacion();
      float GetMontoReparacion();
      float ComisionReparacion();
};
#endif

