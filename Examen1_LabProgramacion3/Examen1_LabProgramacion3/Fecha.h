#ifndef EXAMEN_H
#define EXAMEN_H

class Fecha
{

public:
	void setMes(int);
	void setDia(int);
	void setA�o(int);

	int getMes();
	int getDia();
	int getA�o();
	Fecha(int,int,int);
	void Imprimir();
private: 
	int Mes;
	int Dia;
	int A�o;








};






#endif // !EXAMEN_H

