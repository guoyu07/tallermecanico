/*  MTaller.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012
 */

#include "MTaller.h"
// Construtor que inicializa en cero el atributo mayor
MTaller :: MTaller()
{
	mayor = 0;
}
void MTaller :: SetMayor(float m)
{
     mayor = m;
}
float MTaller :: GetMayor()
{
    return mayor;
}

/* Actualiza el atributo mayor comparandolo con la comisión total
   que recibio el mecanico */
void MTaller :: ProcesarTrabajoMecanico(MMecanico meca) // Relacion uso con MMecanico
{
   if (meca.GetAcMontoComision() > mayor)
      mayor = meca.GetAcMontoComision();
}
