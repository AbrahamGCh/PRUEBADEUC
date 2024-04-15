#include <iostream>
using namespace std;
int main(){
    double ganancia, donacion;
    cout << "Ingrese ganancia : ";
    cin >> ganancia;
    if(ganancia>=0 && ganancia <=1000){
        donacion=ganancia*5/100;
    }
    if(ganancia>1000 && ganancia <=1500){
        donacion=ganancia*7/100;
    }
    if(ganancia>1500 && ganancia <=2000){
        donacion=ganancia*8/100;
    }
    if(ganancia>2000 && ganancia <=5000){
        donacion=ganancia*10/100;
    }
    if(ganancia>5000 ){
        donacion=ganancia*15/100;
    }
 cout<<endl;
	cout << "Donacion: S/. " << donacion <<".00"<<endl;
    
}