#include "VeiculoTransporte.h"

VeiculoTransporte::VeiculoTransporte() {
	cout << "\n---Construtor padrao da classe derivada veiculo transporte---\n";
	numPassageiros = 0;
}

VeiculoTransporte::VeiculoTransporte( const double p, const string & m, const int numP ) : Veiculo( p, m ) {
	cout << "\n---Construtor normal da classe derivada veiculo transporte---\n";
	setNumPassageiros( numP );
}

VeiculoTransporte::VeiculoTransporte( const VeiculoTransporte & obj ) : Veiculo( obj ) {
	cout << "\n---Construtor de copia da classe derivada veiculo transporte---\n";
	numPassageiros = obj.numPassageiros;
}

VeiculoTransporte::~VeiculoTransporte() {
	cout << "\nDestrutor da classe derivada veiculo transporte...\n";
}

void VeiculoTransporte::setNumPassageiros( const int numP ) {
	if( numP > 0 ) {
		numPassageiros = numP;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

int VeiculoTransporte::getNumPassageiros() {
	return numPassageiros;
}

void VeiculoTransporte::imprime() {
	Veiculo::imprime();
	cout << "Numero de passageiros: " << getNumPassageiros() << endl;
}



