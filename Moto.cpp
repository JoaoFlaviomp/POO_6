#include "Moto.h"

Moto::Moto() {
	cout << "\n---Construtor padrao da classe derivada moto---\n";
	cilindradas = 0;
}

Moto::Moto( const double v, const string & m, const int ano, const int c ) : VeiculoPasseio( v, m, ano ){
	cout << "\n---Construtor normal da classe derivada moto---\n";
	setCilindradas( c );
}

Moto::Moto( const Moto & obj ) : VeiculoPasseio( obj ) {
	cout << "\n---Construtor de copia da classe derivada moto---\n";
	cilindradas = obj.cilindradas;
}

Moto::~Moto() {
	cout << "\nDestrutor da classe derivada da moto---\n";
}

void Moto::setCilindradas( const int c ) {
	if( c > 0 ) {
		cilindradas = c;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

int Moto::getCilindradas() {
	return cilindradas;
}

double Moto::IPVA() {
	return Veiculo::getPreco() * 0.04;
}

double Moto::valorSeguro() {
	int anoAtual = 2023;
	double x = 0.02;
	double y = anoAtual- y;
	//double seguro = ( Veiculo::getPreco() * x ) * ( 1 + ( 2 * y ) );
	if( getCilindradas() > 500 ) {
		// Acr�scimo de 10%;
	}
}

void Moto::imprime() {
	VeiculoPasseio::imprime();
	cout << "Cilindradas: " << getCilindradas() << endl;
}
