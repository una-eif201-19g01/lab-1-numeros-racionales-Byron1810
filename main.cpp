/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Numeros Racionales
 *
 *        Created:  2019-08-04
 *
 *         Author:  Byron Argüello Rodríguez byron181098@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>
#include <sstream>
#include "Racional.h"

int main() {
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;

	std::cout << "Tutorial numeros de fracciones" << std::endl;

	std::cout << "SIMPLIFICACION FRACCION A: " << fraccionA.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;

	std::cout << "SIMPLIFICACION FRACCION B: " << fraccionB.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;

	std::cout << "\nSUMAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nRESTAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.restFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " - " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nMULTIPLICAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.multipliFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " * " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nDIVIDIR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.diviFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " / " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nELEVAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.elevFraccion();
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " ^2 " <<
		" = " << fraccionAux.obtenerString() << std::endl;

	return 0;
}