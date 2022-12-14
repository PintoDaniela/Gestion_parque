#ifndef VENTA_H
#define VENTA_H

#include "Fecha.h"
#include "Pase.h"

class Venta{

    private:
        int _numeroVenta;
        int _dniCliente;
        int _medioDePago;
        float _monto;
        int _legajoEmpleado;
        bool _estado;
        Fecha _fecha;
        Pase _pase;

    public:
        Venta();
        void setNumVenta(int);
        void setDniCliente(int);
        void setMedioDePago(int);
        void setLegajoEmpleado(int);
        void setEstado(bool);
        void setMonto(float);
        void setFecha(Fecha);
        void setPase(Pase pase);
        int getNumVenta();
        int getDniCliente();
        int getLegajoEmpleado();
        int getMedioDePago();
        float getMonto();
        bool getEstado();
        Fecha getFecha();
        Pase getPase();

        void mostrarVenta(int);
        bool leerDeDisco(int);
        bool GrabarEnDisco();
        //virtual ~Venta();

};

#endif // VENTA_H
