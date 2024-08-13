#include<iostream>
using namespace std;
class Alumno{
	private:
		int edad;
		string name;
	public:
		Alumno(){
			cout<<"ingrese nombre del alumno: ";
			cin>>name;
			cout<<"ingrese la edad: ";
			cin>>edad;
		}
		void imprimir(){
			cout<<name<<" tiene "<<edad<<" anios"<<endl;
		}
		void maymen(){
			if(edad>=18){
				cout<<name<<" es mayor de edad";
			}
			else{
				cout<<name<<" es menor de edad";
			}
		}
};

int main(){
	Alumno a;
	a.imprimir();
	a.maymen();
}
