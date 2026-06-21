#include <iostream>
using namespace std;
int main(){
    char nombre1[40], nombre2[40];
    int edad1, edad2;
    cout<<"Persona 1"<<endl;
    cout<<"ingrese el nombre: ";
    cin.getline(nombre1, 40);
    cout<<"ingrese la edad: ";
    cin>>edad1;
    cin.ignore();
    cout << "Persona 2"<<endl;
    cout<<"ingrese el nombre: ";
    cin.getline(nombre2, 40);
    cout<<"ingrese la edad: ";
    cin>>edad2;
    cout <<nombre1;
    if(edad1>=18){
        cout<<" es mayor de edad"<<endl;
    }
	else{
        cout<<" no es mayor de edad"<<endl;
    }
    cout<<nombre2;
    if(edad2>=18){
        cout<<" es mayor de edad"<<endl;
    } 
	else{
        cout<<" no es mayor de edad"<<endl;
    }
    return 0;
}
