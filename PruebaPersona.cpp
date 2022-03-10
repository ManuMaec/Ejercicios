#include <iostream>
#include <vector>
 
using namespace std;

//CLASES

class Persona{
public:
    char Nombre
    char DNI
    double edad
public:
    Persona (double edad = 18){
        setNombre(Nombre);
        setDNI(DNI);
        setedad(edad);
    }
    void setNombre(char Nombre){
        this->Nombre = Nombre : this->Nombre;;
    }
    void setDNI(char DNI){
        this->DNI = DNI : this->DNI;
    }
    double setedad(int edad){
        this->edad = edad : this->edad= 18;
    }

    void getNombre(){
        return->Nombre = Nombre;
    }
    void getDNI(){
        return->DNI = DNI;
    }
    double getedad(){
        return->edad = edad;
    }
    void imprimir(){
       cout << "Mi nombre es " << this->Nombre << "tengo " << this->edad << " anios y mi DNI es" << this->DNI << endl;
     }
    void mayorMenor(){
    if (this->edad > 18){
        cout << "Es mayor de edad" << endl;
    } else {
        cout << "Es menor de edad" << endl;
    }
}
 
};




int main(){
cout << "Manuel Andres Espinoza Calderon" << endl;

Persona Manuel;

Manuel.setNombre("Manuel");
Manuel.setDNI("45687534C");
Manuel.setedad(21);
Manuel.imprimir();


//VECTORES
vector<double> v1(3);
int n,mult;
int cont=0;

for(int i=0;i<3;i++){
    cout << "Introduce un numero: ";
    cin >> n;
v1[i]=n;
}

for(int i=0; i<v1.size() ; i++){
    cont=cont+v1[i];
}

mult=cont%11;

if(mult=0){
    cout << "VIP" << endl;
}


    return 0;
}