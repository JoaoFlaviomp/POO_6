#include "Veiculo.h"
#include "VeiculoTransporte.h"
#include "Onibus.h"
#include "Taxi.h"
#include "VeiculoPasseio.h"
#include "Carro.h"
#include "Moto.h"

int main() {
	// Declarando o ponteiro da classe basica e instanciando os objetos do programa;
	
	VeiculoTransporte *ptr;
	VeiculoPasseio *ptr1;
	Onibus obj0( 100000, "Fiat", 10, 4 );
	Taxi obj1( 45000, "Ford", 4, 10, 4, 10, 2012 );
	Carro obj2( 48000, "Nissan", 2010, 4 );
	Moto obj3( 25000, "Honda", 2015, 300 );
	
	cout << "\n---Polimorfismo---\n";
	// Onibus;
	ptr = &obj0;
	ptr->imprime();
	cout << "Valor do IPVA a ser pago: " << ptr->IPVA() << endl;
	cout << "Valor da tarifa: " << ptr->valorTarifa() << endl;
	
	// Taxi;
	ptr = &obj1;
	ptr->imprime();
	cout << "Valor do IPVA a ser pago: " << ptr->IPVA() << endl;
	cout << "Valor da tarifa: " << ptr->valorTarifa() << endl;
	
	// Carro;
	ptr1 = &obj2;
	ptr1->imprime();
	cout << "Valor do IPVA a ser pago: " << ptr1->IPVA() << endl;
	
	// Moto;
	ptr1 = &obj3;
	ptr1->imprime();
	cout << "Valor do IPVA a ser pago: " << ptr1->IPVA() << endl;
	return 0;
}
