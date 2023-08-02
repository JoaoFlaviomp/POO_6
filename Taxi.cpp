#include "Taxi.h"

Taxi::Taxi() {
	cout << "\n---Construtor padrao da classe derivada taxi---\n";
	tarifaInicial = 0.0;
	valorKM = 0.0;
	distanciaKM = 0.0;
}

Taxi::Taxi( const double v, const string & m, const int numP, const double tarifa, const double valor, const int disKM ) : VeiculoTransporte( v, m, numP ) : Carro(v,m,ano){
	cout << "\n---Construtor normal da classe derivada onibus---\n";
	setTarifaInicial( tarifa );
	setValorKM( valor );
	setDistanciaKM( disKM );
}

Taxi::Taxi( const Taxi & obj ) : VeiculoTransporte( obj ) {
	cout << "\n---Construtor de copia da classe derivada onibus---\n";
	tarifaInicial = obj.tarifaInicial;
	valorKM = obj.valorKM;
	distanciaKM = obj.distanciaKM;
} 

Taxi::~Taxi() {
	cout << "\nDestrutor da classe derivada taxi...\n";
}

void Taxi::setTarifaInicial( const double tarifa ) {
	if( tarifa > 0 ) {
		tarifaInicial = tarifa;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

double Taxi::getTarifaInicial() {
	return tarifaInicial;
}

void Taxi::setValorKM( const double valor ) {
	if( valor > 0 ) {
		valorKM = valor;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

double Taxi::getValorKM() {
	return valorKM;
}

void Taxi::setDistanciaKM( const int distancia ) {
	if( distancia > 0 ) {
		distanciaKM = distancia;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

int Taxi::getDistanciaKM() {
	return distanciaKM;
}

double Taxi::IPVA() {
	return Veiculo::getPreco() * 0.02;
}

double Taxi::valorTarifa() {
	return getTarifaInicial() + ( getValorKM() * getDistanciaKM() );
}

void Taxi::imprime() {
	VeiculoTransporte::imprime();
	cout << "Tarifa inicial: " << getTarifaInicial() << endl;
	cout << "Valor por KM rodado: " << getValorKM() << endl;
	cout << "Distancia percorrida: " << getDistanciaKM() << endl;
}


