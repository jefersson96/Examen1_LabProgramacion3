#ifndef EXAMEN_H
#define EXAMEN_H

class Fecha
{

public:
	void setMes(int);
	void setDia(int);
	void setAño(int);

	int getMes();
	int getDia();
	int getAño();
	Fecha(int,int,int);
	void Imprimir();
private: 
	int Mes;
	int Dia;
	int Año;








};






#endif // !EXAMEN_H

