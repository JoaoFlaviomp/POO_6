#ifndef MOTO_H
#define MOTO_H
#include "VeiculoPasseio.h"

class Moto : public VeiculoPasseio {
	public:
		Moto();
		Moto( const double, const string & , const int, const int );
		Moto( const Moto & );
		~Moto();
		
		void setCilindradas( const int );
		int getCilindradas();
		
		virtual double IPVA();
		virtual double valorSeguro();
		virtual void imprime();
		
	private:
		int cilindradas;
};

#endif
