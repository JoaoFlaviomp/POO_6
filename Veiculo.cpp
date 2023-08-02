#include "Veiculo.h"

Veiculo::Veiculo() {
	cout << "\n---Construtor padrao da classe basica---\n";
	preco = 0.0;
	marca = "";
}

Veiculo::Veiculo( const double p, const string & m ) {
	cout << "\n---Construtor normal da classe basica---\n";
	setPreco( p );
	setMarca( m );
}

Veiculo::Veiculo( const Veiculo & obj ) {
	cout << "\n---Construtor de copia da classe basica---\n";
	preco = obj.preco;
	marca = obj.marca;
}

Veiculo::~Veiculo() {
	cout << "\nDestrutor da classe basica...\n";
}

void Veiculo::setPreco( const double p ) {
	if( p > 0 ) {
		preco = p;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

double Veiculo::getPreco() {
	return preco;
}

void Veiculo::setMarca( const string & m ) {
	marca = m;
}

string Veiculo::getMarca() {
	return marca;
}

/*double Veiculo::IPVA( const double ipva ) {
	cout << "\n---Calculo do ipva---\n";
	return ( preco * 0.04 );	
}*/

void Veiculo::imprime() {
	cout << "\nAtributos do objeto---\n";
	cout << "Preco do veiculo:" << getPreco() << endl;
	cout << "Marca do veiculo:" << getMarca() << endl;
}
