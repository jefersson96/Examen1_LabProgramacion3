#include <iostream>
#include "Producto.h"
#include "Factura.h"
#include"Fecha.h"

////////////////////////////////FuncionesProductos/////////////////////////
void AgregarProducto(Producto *&Lista,string nombre,float precio,int cantidad) {
	Producto*Nuevo_producto = new Producto();
	Producto *Auxiliar=Lista;
	Nuevo_producto->Nombre=nombre;
	Nuevo_producto->Cantidad = cantidad;
	Nuevo_producto->Precio = precio;

	if (Lista == Auxiliar) {
		Lista = Nuevo_producto;
	
	}
	else {
	
	
		Auxiliar->Siguiente = Nuevo_producto;
	}


	Nuevo_producto->Siguiente = Auxiliar;
	cout << "Se a agregado un nuevo producto"<<endl;
}
void MostrarProductos(Producto*Lista) {
	Producto *Actual = new Producto();

	Actual = Lista;

	while (Actual != NULL) {
	
		cout << "Producto: " << Actual->Nombre << "Precio :" << Actual->Precio << "Cantidad :" << Actual->Cantidad << endl;
	Actual= Actual->Siguiente;
	}

	

}

void ObtenerTotalFinal(Producto *Lista) {
	float Subtotal=0;
	Producto *Actual = new Producto();

	Actual = Lista;

	while (Actual != NULL) {
		
		Subtotal = Subtotal+(Actual->Precio*Actual->Cantidad);

		Actual = Actual->Siguiente;
	}

	cout << "El SubTotal es :" << Subtotal<<endl;
	cout << "ISV :" << Subtotal * 7 / 100<<endl;
	cout << "Total: " << Subtotal + ( Subtotal * 7 / 100)<<endl;
} 

////////////////////////////////FuncionesProductos/////////////////////////




/*///////////////////////////////FuncionesFacturas////////////////////////*/
void MostrarFacturas(Factura *Lista) {
	int c = 0;
	Factura *Actual = new Factura();
	Actual = Lista;
	while (Actual != NULL) {
	
		cout << "Factura[" << c << "] A nombre de :" << Actual->Nombre<<endl;
			c++;
			Actual = Actual->Siguiente;
	}


}

void AgregarFac(Factura *&Lista,Producto *Lista2, string nombre) {

	Factura *nueva_factura = new Factura();
	
	nueva_factura->Nombre = nombre;
	nueva_factura->ListaProducto = Lista2;
	Factura *Auxiliar = Lista;

	if (Lista == Auxiliar) {
	
		Lista = nueva_factura;
	
	}
	nueva_factura->Siguiente = Auxiliar;
	cout << "Se a agregado una nueva factura..." << endl;
}

float TotalProducto(Producto *Lista) {
	Producto *Actual = new Producto();
	int Total = 0;

	Actual = Lista;
	while (Actual != NULL) {
		Total = Total + (Actual->Cantidad*Actual->Precio) + ((Actual->Cantidad*Actual->Precio) * 7 / 100);
		Actual = Actual->Siguiente;
	
	}
	return Total;
}
void TotalPagadoFacturas(Factura *ListaF) {
	Factura *ActualF=new Factura();
	int contador=0;
	
	float Total = 0;

	Producto *ActualP = new Producto();
	ActualF = ListaF;
	ActualP = ListaF->ListaProducto;
	while (ActualF!=NULL)
	{
		
		Total=Total+TotalProducto(ActualF->ListaProducto);

		contador++;
		ActualF=ActualF->Siguiente;
		

	}

	cout << "Total: " << Total << "Facturas :" << contador;
}


int main() {
	Fecha fecha(23, 2, 2018);

	Producto *Lista = NULL;
	Factura *Lista2 = NULL;
	Producto*Lista4 = NULL;
	Producto *Lista3 = NULL;
	Producto *Lista5 = NULL;
	Producto *Lista6 = NULL;
	AgregarProducto(Lista4, "Jabon", 10, 2);
	AgregarProducto(Lista4, "Pan", 20, 3);
	AgregarProducto(Lista, "Agua", 30, 3);
	AgregarProducto(Lista, "Aceite", 9, 2);
	AgregarProducto(Lista3, "Cafe", 30, 4);
	AgregarProducto(Lista3, "Carne", 2, 10);
	AgregarProducto(Lista5, "Pollo", 6, 20);
	AgregarProducto(Lista5, "Arroz", 5, 10);
	AgregarProducto(Lista3, "mango", 5, 10);
	AgregarProducto(Lista3, "verde", 100, 10);
	AgregarProducto(Lista6, "Mantequilla", 1000, 2);
	MostrarProductos(Lista3);
	ObtenerTotalFinal(Lista);
	AgregarFac(Lista2, Lista5, "Ever");
	AgregarFac(Lista2, Lista4, "Liliana");
	AgregarFac(Lista2,Lista,"Jefersson");
	AgregarFac(Lista2, Lista3, "Jorge");
	AgregarFac(Lista2, Lista, "mendez");
	AgregarFac(Lista2, Lista6, "Rodrigo");
AgregarFac(Lista2, Lista3, "JUAN");
	TotalPagadoFacturas(Lista2);
	MostrarFacturas(Lista2);
	//TotalPagadoFacturas(Lista2,Lista);



	
		system("pause");
}