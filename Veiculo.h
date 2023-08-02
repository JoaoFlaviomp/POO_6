#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

using namespace std;

class Veiculo {
	public:
		Veiculo();
		Veiculo( const double, const string & );
		Veiculo( const Veiculo & );
		virtual ~Veiculo();
		
		void setPreco( const double );
		double getPreco();
		
		void setMarca( const string & );
		string getMarca();
		
		virtual double IPVA() = 0;
		virtual void imprime(); 
		
	private:
		double preco;
		string marca;
	
};

#endif
