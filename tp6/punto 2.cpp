#include <iostream>
using namespace std;
struct tri{
    float lado1;
    float lado2;
    float lado3;
};
void inicializar(tri & t){
    cout<<"ingresa los tres lados del triangulo:"<<endl;
    cout<<"lado 1: ";
    cin>>t.lado1;
    cout<<"lado 2: ";
    cin>>t.lado2;
    cout<<"lado 3: ";
    cin>>t.lado3;
}
void ladomayor(tri t) {
    float mayor=t.lado1;
    if(t.lado2>mayor) mayor=t.lado2;
    if (t.lado3>mayor) mayor=t.lado3;
    cout<<"Lado mayor: "<<mayor<<endl;
}
void equi(tri t){
    if(t.lado1 == t.lado2 && t.lado2 == t.lado3){
        cout<<"el triangulo es equilatero."<<endl;
    } 
	else{
        cout<<"el triangulo no es equilatero."<<endl;
    }
}
int main(){
    tri t;
    inicializar(t);
	ladomayor(t);
    equi(t);
    return 0;
}
