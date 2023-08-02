#ifndef CARRO_H
#define CARRO_H
#include "VeiculoPasseio.h"

class Carro : public VeiculoPasseio {
	public:
		Carro();
		Carro( const double, const string &, const int, const int );
		Carro( const Carro & );
		~Carro();
		
		void setNumPortas( const int );
		int getNumPortas();
		
		virtual double IPVA();
		virtual double valorSeguro();
		virtual void imprime();
		
	private:
		int numPortas;
};

#endif
