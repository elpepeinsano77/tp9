#include<iostream>
using namespace std;
class Sumatoria {
	private:
		int num=1,sumat=0;
	public:
		Sumatoria(){
		while(num!=0){
			cin>>num;
			sumat+=num;
		}
	}
		~Sumatoria(){
			cout<<"la suma de los valores ingresados es "<<sumat;
		}
};

int main(){
	Sumatoria sum;
}
