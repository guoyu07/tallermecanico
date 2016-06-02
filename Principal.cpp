/*  Principal.cpp
 *  Creado: 08/10/2011
 *  Autor: Prof. Margarita Pereira
 *  Ajustado: 03/03/2012

    Un taller automotriz de la ciudad de Barquisimeto que trabaja con reparaciones
    eléctricas, tren delantero y frenos, requiere saber cual es la comisión que le
    deberá cancelar a cada uno de sus mecánicos por las reparaciones realizadas.
    La comisión se calcula en base al monto cobrado al cliente y al tipo de reparación
    (valor numérico 1. Eléctricas, 2. Tren Delantero y 3. Frenos), según la siguiente tabla:
    Tipo de Reparación        Porcentaje de la comisión
        Eléctricas                     10
        Tren Delantero                 20
        Frenos                         15

    Cada mecánico recibe unos BsF. que corresponden al monto total de sus comisiones.
    El taller necesita saber,  entre todos los montos totales de comisiones cual fue
    el mayor.
    Adicional, el taller suministra de cada mecánico los datos de: cedula, nombre y
    cantidad de reparaciones que realizo y por  cada reparación un monto.
*/

#include "Controlador.h"

int main()
{
   Controlador c;
   c.ProcesarMecanicos();
   c.ReporteTaller();
   return 0;
}
