#pragma once
#include "Fecha.h"
#include"Producto.h"
#ifndef FACTURA_H
#define FACTURA_H

class Factura {
public:
	
	
	Fecha  *Fecha(int,int,int);
	
	string Nombre;
	Factura *Siguiente;
	Producto *ListaProducto;



};




#endif // !FACTURA_H

