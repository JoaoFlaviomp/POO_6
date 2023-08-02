#include "VeiculoPasseio.h"

VeiculoPasseio::VeiculoPasseio() {
	cout << "\n---Construtor padrao da classe derivada veiculo passeio---\n";
	anoFabricacao = 0;
}

VeiculoPasseio::VeiculoPasseio( const double v, const string & m, const int ano ) : Veiculo( v, m ) {
	cout << "\n---Constutor normal da classe derivada veiculo passeio---\n";
	setAnoFabricacao( ano );
}

VeiculoPasseio::VeiculoPasseio( const VeiculoPasseio & obj ) : Veiculo( obj ) {
	cout << "\n---Construtor de copia da classe derivada---\n";
	anoFabricacao = obj.anoFabricacao;
} 

VeiculoPasseio::~VeiculoPasseio() {
	cout << "\nDestrutor da classe derivada veiculo passeio---\n";
}

void VeiculoPasseio::setAnoFabricacao( const int ano ) {
	if( ano > 0 ) {
		anoFabricacao = ano;
	} else {
		cout << "Erro! Valor invalido!\n";
	}
}

int VeiculoPasseio::getAnoFabricacao() {
	return anoFabricacao;
}

void VeiculoPasseio::imprime() {
	Veiculo::imprime();
	cout << "Ano de fabricacao: " << getAnoFabricacao() << endl;
}
