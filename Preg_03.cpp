#include<iostream>

using namespace std;

int main(){
	int horas,pago;
	cout << "Ingrese el numero de horas "; cin>>horas;
	
	if(horas<=4){
		pago=6;
	}else if(horas>4){
		pago = (horas-4)*2+6;
	}
	
	cout<<endl;
	cout << "Usted tiene que pagar : S/. " << pago <<".00"<<endl;
	
}