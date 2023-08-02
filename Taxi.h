#ifndef TAXI_H
#define TAXI_H
#include "VeiculoTransporte.h"

class Taxi : public VeiculoTransporte, public Carro {
	public:
		Taxi();
		Taxi( const double, const string &, const int, const double, const double, const int );
		Taxi( const Taxi & );
		~Taxi();
		
		void setTarifaInicial( const double );
		double getTarifaInicial();
		
		void setValorKM( const double );
		double getValorKM();
		
		void setDistanciaKM( const int );
		int getDistanciaKM();
		
		virtual double IPVA();
		virtual double valorTarifa();
		virtual void imprime();
		
		
	private:
		double tarifaInicial;
		double valorKM;
		int distanciaKM;
};

#endif
