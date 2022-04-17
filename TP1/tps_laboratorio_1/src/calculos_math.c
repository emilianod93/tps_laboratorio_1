/*
 * calculos_math.c
 *
 *  Created on: 16 abr. 2022
 *      Author: equipo
 */
/**
 * @fn double calcularDescuentoConDebito(int, float)
 * @brief calcula el precio que se aplica con el descuento,multiplica precio por descuento.
 *
 * @param num1
 * @param num2
 * @return double
 */
double calcularDescuentoConDebito(int num1,float num2){

	double resultado;

	resultado=num1*num2;

	return resultado;

}
/**
 * @fn double calcularPrecioConCredito(int, float)
 * @brief calcula el precio abonando con credito,multiplica el precio por el interes.
 *
 * @param num1
 * @param num2
 * @return double
 */
double calcularPrecioConCredito(int num1,float num2){

	double resultado;
	resultado=num1*num2;

	return resultado;

}

/**
 * @fn double calcularPrecioEnBitcoins(int, double)
 * @brief calcula precio en bitcoins,divide precio por precio de bitcoins.
 *
 * @param num1
 * @param num2
 * @return double
 */
double calcularPrecioEnBitcoins(int num1,double num2){
	double resultado;

	resultado=num1/num2;
	return resultado;
	//1BTC -> 4606954.55 Pesos Argentinos
}

/**
 * @fn float calcularPrecioUnitario(int, int)
 * @brief calcula precio unitraio por aerolinea, divide precio por kilometros.
 *
 * @param num1
 * @param num2
 * @return float
 */
float calcularPrecioUnitario(int num1,int num2){
	float resultado;

	resultado=(float)num1/num2;
	return resultado;
}

/**
 * @fn float calcularDiferenciaDePrecio(int, int)
 * @brief calcula la diferencia de precio entre las dos aerolinea, resta los dos precios.
 *
 * @param num1
 * @param num2
 * @return float
 */
float calcularDiferenciaDePrecio(int num1, int num2){
	float resultado;

	resultado=num1-num2;
	if(resultado<0){
		resultado=resultado*-1;
	}
	return resultado;

}


