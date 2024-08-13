#include<iostream>
using namespace std;
class Operaciones{
	private:
		int n1,n2;
		char op;
	public:
		Operaciones(){
			cout<<"ingrese la operacion que desee hacer (de dos terminos)"<<endl;
			cin>>n1;
			cin>>op;
			cin>>n2;
		}
		char getOp(){
			return op;
		}
		void suma(),resta(),div(),multp();
};

void Operaciones::suma(){
	int resultado=n1+n2;
	cout<<n1<<op<<n2<<" = "<<resultado;
}

void Operaciones::resta(){
	int resultado=n1-n2;
	cout<<n1<<op<<n2<<" = "<<resultado;
}

void Operaciones::div(){
	int resultado=n1/n2;
	cout<<n1<<op<<n2<<" = "<<resultado;
}

void Operaciones::multp(){
	int resultado=n1*n2;
	cout<<n1<<op<<n2<<" = "<<resultado;
}

int main(){
	char o;
	Operaciones op;
	o=op.getOp();
	if(o=='+'){
		op.suma();
	}
	else if(o=='-'){
		op.resta();
	}
	else if(o=='/'){
		op.div();
	}
	else if(o=='*'){
		op.multp();
	}
}
