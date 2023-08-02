#ifndef ONIBUS_H
#define ONIBUS_H
#include "VeiculoTransporte.h"

class Onibus : public VeiculoTransporte {
	public:
		Onibus();
		Onibus( const double, const string &, const int , const double );
		Onibus( const Onibus & );
		~Onibus();
		
		void setTarifaFixa( const double );
		double getTarifaFixa();
		
		virtual double IPVA();
		virtual double valorTarifa();
		virtual void imprime();
		
	private:
		double tarifaFixa;
};

#endif

