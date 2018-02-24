#include <iostream>
#include"Fecha.h"

using namespace std;
Fecha::Fecha(int dia, int mes, int año) {

	this->Dia = dia;
	this->Mes = mes;
	this->Año = año;





}

int Fecha::getAño() {

	return Año;

}

int Fecha::getDia() {
	return Dia;

}

int Fecha::getMes() {
	return Mes;


}
void Fecha::setAño(int año) {

	Año = año;

}

void Fecha::setMes(int mes) {

	Mes = mes;

}
void Fecha::setDia(int dia) {

	Dia = dia;

}
void Fecha::Imprimir() {
	cout << "Fecha /"<<Dia<<"/"<<Mes<<"/"<<Año;
}
