#include "Onibus.h"

Onibus::Onibus() {
	cout << "\n---Construtor padrao da classe derivada onibus---\n";
	tarifaFixa = 0.0;
}

Onibus::Onibus( const double p, const string & m, const int numP, const double tarifa ) : VeiculoTransporte( p, m, numP ) {
	cout << "\n---Construtor normal da classe derivada onibus---\n";
	setTarifaFixa( tarifa );
}

Onibus::Onibus( const Onibus & obj ) : VeiculoTransporte( obj ) {
	cout << "\n---Construtor de copia da classe derivada onibus---\n";
	tarifaFixa = obj.tarifaFixa;
}

Onibus::~Onibus() {
	cout << "\nDestrutor da classe derivada onibus...\n";
}

void Onibus::setTarifaFixa( const double tarifa ) {
	if( tarifa > 0 ) {
		tarifaFixa = tarifa;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

double Onibus::getTarifaFixa() {
	return tarifaFixa;
}

double Onibus::IPVA() {
	return Veiculo::getPreco() * 0.01;
}

double Onibus::valorTarifa() {
	return getTarifaFixa();
}

void Onibus::imprime() {
	VeiculoTransporte::imprime();
	cout << "Preco tarifa fixa: " << getTarifaFixa() << endl;
}



