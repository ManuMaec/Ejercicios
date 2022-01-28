#include <iostream>
using namespace std;

int main(){

string contrasena="contrasenia";
string guarda;
int edad;
int nota;
int num;

/*Ej1*/
cout << "Introduzca la contrasenia 'contrasenia': ";
cin >> guarda;
while(guarda != contrasena){
  cout << "Introduzca la contrasenia 'contrasenia': ";
  cin >> guarda;
}
cout << "Correcto" << endl;


/*Ej2*/
cout << "¿Cual es tu edad? ";
cin >> edad;

if(edad >= 18){
  cout << "Eres mayor de edad :D" << endl;
}
else{
  cout << "Eres menor de edad, tas chiquito/a" << endl;
}


/*Ej3*/
cout << "¿Cual es tu nota? ";
cin >> nota;

if(nota=10){
  cout << "Sobresaliente" << endl;
}else if(nota==9 && nota==8){
  cout << "Notable" << endl;
}else if(nota==7 && nota==6){
  cout << "Bien" << endl;
}else if(nota==5){
  cout << "Suficiente" << endl;
}else if(nota<5){
  cout << "Suspenso" << endl;
}

/*Ej4*/
cout << "Introduzca un numero: ";
cin >> num;

if(num%2==0){
  cout << "Es par" << endl;
}
else{
  cout << "Es impar" << endl;
}


return 0;
}
