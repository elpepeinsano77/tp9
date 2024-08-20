#include<iostream>
using namespace std;
class Estudiante {
	private:
		string nombre;
		int edad,calificacion;
	public:
		string getNombre(){
			return nombre;
		}	
		int getEdad(){
			return edad;
		}
		int getCalif(){
			return calificacion;
		}
		void setNombre(){
			string nn;
			cin>>nn;
			nombre=nn;
		}
		void setEdad(){
			int en;
			cin>>en;
			edad=en;
		}
		void setCalif(){
			int cn;
			cin>>cn;
			calificacion=cn;
		}
		Estudiante(){
			setNombre();
			setEdad();
			setCalif();
		}
		~Estudiante(){
			cout<<"nombre: "<<getNombre()<<endl;
			cout<<"edad: "<<getEdad()<<endl;
			cout<<"calificacion: "<<getCalif()<<endl;
		}
};

int main(){
	Estudiante est;
}
