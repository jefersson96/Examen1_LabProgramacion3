#include <iostream>
#include"Fecha.h"

using namespace std;
Fecha::Fecha(int dia, int mes, int a�o) {

	this->Dia = dia;
	this->Mes = mes;
	this->A�o = a�o;





}

int Fecha::getA�o() {

	return A�o;

}

int Fecha::getDia() {
	return Dia;

}

int Fecha::getMes() {
	return Mes;


}
void Fecha::setA�o(int a�o) {

	A�o = a�o;

}

void Fecha::setMes(int mes) {

	Mes = mes;

}
void Fecha::setDia(int dia) {

	Dia = dia;

}
void Fecha::Imprimir() {
	cout << "Fecha /"<<Dia<<"/"<<Mes<<"/"<<A�o;
}
