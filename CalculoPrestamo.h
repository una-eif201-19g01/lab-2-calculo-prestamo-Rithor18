//
// Created by Maikol Guzman  on 2019-08-08.
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoPrestamo {
private:
    float monto;
    float obtenerPorcentaje(std::string porcentajeTXT)
    int calcularTiempoEnMeses();
    float calcularInteresMensual();
public:

    CalculoPrestamo() {
    }

    CalculoPrestamo(float monto) :
    monto(monto) {
    }


};


#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
