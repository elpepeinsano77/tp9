#include<iostream>
using namespace std;
class Empleado{
	private:
		string nombre;
		int sueldo;
	public:
		Empleado(){
			cout<<"ingrese nombre del empleado: ";
			cin>>nombre;
			cout<<"ingrese el sueldo: $";
			cin>>sueldo;
		}	
		void imprimir(){
			cout<<nombre<<" tiene un sueldo de $"<<sueldo<<endl; 
		}
		void imp(){
			if(sueldo>=3000){
			cout<<nombre<<" debe pagar impuestos";
		}
	}
};

int main(){
	Empleado e;
	e.imprimir();
	e.imp();
}
