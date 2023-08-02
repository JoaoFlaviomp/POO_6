#ifndef VEICULOPASSEIO_H
#define VEICULOPASSEIO_H
#include "Veiculo.h"

class VeiculoPasseio : public Veiculo {
	public:
		VeiculoPasseio();
		VeiculoPasseio( const double, const string &, const int );
		VeiculoPasseio( const VeiculoPasseio & );
		~VeiculoPasseio();
		
		void setAnoFabricacao( const int );
		int getAnoFabricacao();
		
		virtual double IPVA() = 0;
		virtual double valorSeguro() = 0;
		virtual void imprime();
		
	private:
		int anoFabricacao;
		
};

#endif

