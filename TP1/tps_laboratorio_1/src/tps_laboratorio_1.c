/*
 ============================================================================
 Name        : tps_laboratorio_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculos_math.h"


int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int ingresarKilometros;
	char opcionDos;
	int precioLatam;
	int precioAerolineas;
	double precioLatamConDebito;
	double precioAeroConDebito;
	float descuentoConDebito=0.9;
	float pagoConCredito=1.25;
	double precioLatamConTarjeta;
	double precioAeroConTarjeta;
	double precioBitcoin=4606954.55;
	double precioLatamEnBitcoins;
	double precioAeroEnBitcoins;
	float precioLatamPorKm;
	float precioAeroPorKm;
	float diferenciaDePrecios;
	int fKm=0,fAereo=0,fLatam=0;
	int ingresarKilometrosH=7090;
	int precioLatamH=162965;
	int precioAerolineasH=159339;
	double precioLatamConDebitoH;
	double precioAeroConDebitoH;
	double precioLatamConTarjetaH;
	double precioAeroConTarjetaH;
	double precioLatamEnBitcoinsH;
	double precioAeroEnBitcoinsH;
	float precioLatamPorKmH;
	float precioAeroPorKmH;
	float diferenciaDePreciosH;


	do{
		printf("1. ingresar kilometros:\n");
		printf("2. Ingresar Precio de Vuelos:\n");
		printf("3. Calcular todos los costos:\n");
		printf("4. Informar Resultados\n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir \n");
		printf("Ingrese una opcion:\n");
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			do{
			printf("ingresar km x:");
			scanf("%d", &ingresarKilometros);
			fKm=1;
				if(ingresarKilometros <= 0){
					printf("Error. Ingrese un numero valido mayor que cero");
				}
			}while(ingresarKilometros<0);
			break;
		case 2:
			do{
				//system("cls");
				printf("z.Precio latam\n");
				printf("y.Precio aerolineas\n");
				printf("x.Salir\n");
				printf("Ingrese una opcion:\n");
				scanf("%c",&opcionDos);

				switch(opcionDos){
					case 'z':
						printf("Ingrese precio vuelo Latam:\n");
						scanf("%d",&precioLatam);
						printf("el precio ingresado es:%d\n",precioLatam);
						fLatam=1;
						break;
					case 'y':
						printf("Ingrese precio vuelo Aerolineas\n");
						scanf("%d",&precioAerolineas);
						printf("el precio ingresado es:%d\n",precioAerolineas);
						fAereo=1;
						break;
				}
			}while(opcionDos!='x');
			break;

		case 3:
			if(fKm==1&&fAereo==1&&fLatam==1){
				precioLatamConDebito=calcularDescuentoConDebito(precioLatam,descuentoConDebito);
				precioAeroConDebito=calcularDescuentoConDebito(precioAerolineas,descuentoConDebito);


				precioLatamConTarjeta=calcularPrecioConCredito(precioLatam,pagoConCredito);
				precioAeroConTarjeta=calcularPrecioConCredito(precioAerolineas,pagoConCredito);

				precioLatamEnBitcoins=calcularPrecioEnBitcoins(precioLatam,precioBitcoin);
				precioAeroEnBitcoins=calcularPrecioEnBitcoins(precioAerolineas,precioBitcoin);

				precioLatamPorKm=calcularPrecioUnitario(precioLatam,ingresarKilometros);
				precioAeroPorKm=calcularPrecioUnitario(precioAerolineas,ingresarKilometros);


				diferenciaDePrecios=calcularDiferenciaDePrecio(precioLatam,precioAerolineas);
			}
			else{
				printf("falta completar datos de ingreso");
			}


			break;
		case 4:
			printf("\nKMS INGRESADOS:%d\n",ingresarKilometros);

			printf("\nPrecio Latam:%d\n",precioLatam);
			printf("el precio latam con debito es de: %.2f\n",precioLatamConDebito);
			printf("el precio latam con credito es de: %.2f\n",precioLatamConTarjeta);
			printf("el precio latam con Bitcoins es de: %lf\n",precioLatamEnBitcoins);
			printf("el precio unitario Latam por km es de: %.2f\n",precioLatamPorKm);

			printf("\nPrecio Aerolieas:%d\n",precioAerolineas);
			printf("el precio Aerolineas con debito es de: %.2f\n",precioAeroConDebito);
			printf("el precio latam con credito es de: %.2f\n",precioAeroConTarjeta);
			printf("el precio Aerolineas con Bitcoins es de: %lf\n",precioAeroEnBitcoins);
			printf("el precio unitario Aerolineas por km es de: %.2f\n",precioAeroPorKm);

			printf("\nla diferencia de precio es de: %.2f\n\n",diferenciaDePrecios);
			break;
		case 5:
			precioLatamConDebitoH=calcularDescuentoConDebito(precioLatamH,descuentoConDebito);
			precioAeroConDebitoH=calcularDescuentoConDebito(precioAerolineasH,descuentoConDebito);


			precioLatamConTarjetaH=calcularPrecioConCredito(precioLatamH,pagoConCredito);
			precioAeroConTarjetaH=calcularPrecioConCredito(precioAerolineasH,pagoConCredito);

			precioLatamEnBitcoinsH=calcularPrecioEnBitcoins(precioLatamH,precioBitcoin);
			precioAeroEnBitcoinsH=calcularPrecioEnBitcoins(precioAerolineasH,precioBitcoin);

			precioLatamPorKmH=calcularPrecioUnitario(precioLatamH,ingresarKilometrosH);
			precioAeroPorKmH=calcularPrecioUnitario(precioAerolineasH,ingresarKilometrosH);


			diferenciaDePreciosH=calcularDiferenciaDePrecio(precioLatamH,precioAerolineasH);

			printf("\nKMS INGRESADOS:%d\n",ingresarKilometrosH);

			printf("\nPrecio Latam:%d\n",precioLatamH);
			printf("el precio latam con debito es de: %.2f\n",precioLatamConDebitoH);
			printf("el precio latam con credito es de: %.2f\n",precioLatamConTarjetaH);
			printf("el precio latam con Bitcoins es de: %lf\n",precioLatamEnBitcoinsH);
			printf("el precio unitario Latam por km es de: %.2f\n",precioLatamPorKmH);

			printf("\nPrecio Aerolieas:%d\n",precioAerolineasH);
			printf("el precio Aerolineas con debito es de: %.2f\n",precioAeroConDebitoH);
			printf("el precio latam con credito es de: %.2f\n",precioAeroConTarjetaH);
			printf("el precio Aerolineas con Bitcoins es de: %lf\n",precioAeroEnBitcoinsH);
			printf("el precio unitario Aerolineas por km es de: %.2f\n",precioAeroPorKmH);

			printf("\nla diferencia de precio es de: %.2f\n\n",diferenciaDePreciosH);

			break;

		case 6:
			printf("\ngracias por usar el promgrama\n");
			break;
	}

	}while(opcion!=6);

return EXIT_SUCCESS;
}
