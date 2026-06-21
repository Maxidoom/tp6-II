#include <iostream>
using namespace std; 
class sq{
private:
    float lado;
public:
    void cargarlado(){
        cout<<"Ingresa el lado del cuadrado: ";
        cin>>lado;
    }
 
    void impperimetro() {
        float perimetro = 4*lado;
        cout<<"perimetro: "<<perimetro<<endl;
    }
    void impsuper(){
        float super=lado * lado;
        cout<<"superficie: "<<super<<endl;
    }
};
int main(){
    sq c;
    c.cargarlado();
    c.impperimetro();
    c.impsuper();
    return 0;
}
 
