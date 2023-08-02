#ifndef VEICULOTRANSPORTE_H
#define VEICULOTRANSPORTE_H
#include "Veiculo.h"

class VeiculoTransporte : public Veiculo {
	public:
		VeiculoTransporte();
		VeiculoTransporte( const double, const string &, const int );
		VeiculoTransporte( const VeiculoTransporte & );
		~VeiculoTransporte();
		
		void setNumPassageiros( const int );
		int getNumPassageiros();
		
		virtual double IPVA() = 0;
		virtual double valorTarifa() = 0;
		virtual void imprime();
		
	private:
		int numPassageiros;
};

#endif


