#include<iostream>

using namespace std;

int main(){
    double v1,v2,v3;
    
    
    cout << "Ingrese valor A : ";cin>>v1;
    cout << "Ingrese valor B : ";cin>>v2;
    
    v3=v1;
    v1=v2;
    v2=v3;
    
    cout << endl;
    cout << "El valor final de A es: " << v1 <<endl;
    cout << "El valor final de B es: " << v2 <<endl;
    
}