/*
 * =====================================================================================
 *
 *       Filename:  Racional.h
 *
 *    Description:  Encabezado para definir la plantilla de los números racionales.
 *
 *        Created:  2019-08-04
 *
 *         Author:  Byron Argüello Rodríguez byron181098@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef NUMEROSRACIONALES_RACIONAL_H
#define NUMEROSRACIONALES_RACIONAL_H

#include<sstream>

class Racional {
	// Variables
	int numerador, denominador;
	// Métodos
	static int calcularMCD(int num, int den);

public:
	// Constructores
	Racional();
	Racional(int numerador, int denominator);

	// Métodos
	static void simplificarFraccion(Racional& fraccion);
	Racional sumFraccion(Racional fraccion);
	Racional restFraccion(Racional fraccion);
	Racional multipliFraccion(Racional fraccion);
	Racional diviFraccion(Racional Fraccion);
	Racional elevFraccion();

	std::string obtenerString();

	int getNumerador() const;

	void setNumerador(int numerador);

	int getDenominador() const;

	void setDenominador(int denominador);
};


#endif //NUMEROSRACIONALES_RACIONAL_H