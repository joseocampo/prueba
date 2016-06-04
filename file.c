#include<iostream>
#include<string>

using namespace std;
 
// Cliente class
class Cliente{
private:
	string nombre;
public:
  Cliente (const string& nom) : nombre(nom){}
  const string& Nombre(void){
    return nombre;
  }
};
 
// Sub clase A
class Banco
{
public:
  bool SuficientesAhorros(Cliente* c, int cantdidad){
	  cout << "Registros bancarios de: " <<c->Nombre()<<endl;
    return true;
  }
};
 
// Sub clase b
class Credito{
public:
  bool TieneBuenCredito(Cliente* c, int cantidad){
	  cout << "Verificacion de Credito " <<c->Nombre()<<endl;
    return true;
  }
};
 
// Sub clase C
class Prestamo{
public:
  bool BuenCredito(Cliente* c, int cantidad){
	  cout << "Verificando prestamo " <<c->Nombre()<<endl;
    return true;
  }
};
 
// La clase 'Facade' 
class Hipoteca{
	private:
  Banco* banco;
  Prestamo* prestamo;
  Credito* credito;
public:
  bool EsElegible(Cliente* clien, int cantidad){
	  cout << clien->Nombre() << " aplica para el prestamo de $" << cantidad <<endl;
    bool elegible = true;
 
	elegible = banco->SuficientesAhorros(clien, cantidad);
 
    if(elegible)
		elegible = prestamo->BuenCredito(clien, cantidad);
 
    if(elegible)
		elegible = credito->TieneBuenCredito(clien, cantidad);
 
    return elegible;
  }
};
 
//El Main 
int main()
{
  Hipoteca hipoteca;
  Cliente* cliente = new Cliente("Tony Stark");
 
  bool elegible = hipoteca.EsElegible(cliente, 1500000);
 
  cout << "\n" << cliente->Nombre() << " ha sido " << (elegible ? "Aprovado" : "Rechazado") << endl;
 system("pause");
  return 0;
}
