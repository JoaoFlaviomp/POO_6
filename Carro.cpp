#include "Carro.h"

Carro::Carro() {
	cout << "\n---Construtor padrao da classe derivada carro---\n";
	numPortas = 0;
} 

Carro::Carro( const double v, const string & m, const int ano, const int portas ) : VeiculoPasseio( v, m, ano ) {
	cout << "\n---Construtor normal da classe derivada carro---\n";
	setNumPortas( portas );
}

Carro::Carro( const Carro & obj ) : VeiculoPasseio( obj ) {
	cout << "\n---Construtor de copia da classe derivada carro---\n";
	numPortas = obj.numPortas;
}

Carro::~Carro() {
	cout << "\nDestrutor da classe derivada carro...\n";
}

void Carro::setNumPortas( const int portas ) {
	if( portas > 0 && portas <= 4 ) {
		numPortas = portas;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

int Carro::getNumPortas() {
	return numPortas;
}

double Carro::IPVA() {
	return Veiculo::getPreco() * 0.04;
}

double Carro::valorSeguro() {
	int anoAtual = 2023;
	double x = 0.02;
	double y = anoAtual- y;
	//double seguro = ( Veiculo::getPreco() * x ) * ( 1 + ( 2 * y ) );
	if( getNumPortas() > 2 ) {
		// Descr�scimo de 5%;
	}
}

void Carro::imprime() {
	VeiculoPasseio::imprime();
	cout << "Numero de portas do carro: " << getNumPortas() << endl;
}
