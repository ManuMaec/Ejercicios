#include <iostream>
#include <cstdlib>
using namespace std;

void imprimir(int array[10], int tam){
  for (int i = 0 ; i < tam ; i++){
    cout << array[i] << endl;
  }
}

int main(){
/*1. Escribe tu nombre por pantalla.*/
cout << "Manuel Andres Espinoza Calderon" << endl;
cout << "" << endl;

/*2.1. Rellena un vector de tamaño 10 con números mayores a 5 solicitando dichos números desde teclado.*/
int vec1[10];
int num;
int x;
/*2.2. Rellena otro vector de tamaño 10 con nueve 0s y un 1.*/
int vec2[10]={0,0,0,0,1,0,0,0,0,0};
int cont=0;


for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero mayor a 5: ";
        cin >> x;
        if (x>=5){
          vec1[i] = x;
        } else {
          cout << "Numero menor a 5 no valido, por favor vuelva a empezar" << endl;
        }
    }
imprimir(vec1, 10);
cout << "" << endl;

/*3. ¡Di un número del 1 al 10!*/
cout << "Di un numero entre 1 y 10: ";
cin >> x;
x=x-1;

/*3.1. En el primer vector decrementa en 5 unidades el número que esté en la posición que se haya introducido por pantalla. Si ese número es menor a 5, la posición debe quedarse a 0.
Deja de solicitar números cuando alguna de las posiciones se quede a 0.*/

/*while(vec1[x]!=0){
  vec1[x]-=5;
  cout << "¡Di un número del 1 al 10!: ";
  cin >> x;
  x=x-1;
  if (vec1[x]<5){
    vec1[x]=0;
  }
  cout << vec1[x] << endl;
}
*/

/*3.2.En el segundo vector indica si ha acertado la posición que tiene el 1 o si por el contrario tiene que probar suerte otra vez.
Deja de solicitar números cuando se hacierte en qué posición está el 1 o se haya solicitado el número al menos 5 veces sin exito.*/
for (int i=0 ; i<5 ; i++){
  if(x==4){
    i=6;
    cout << "Felicidades, acertaste la posicion" << endl;
  } else {
    cout << "No acertaste, prueba otra vez: ";
    cin >> x;
    x=x-1;
  }
}
/*4. Busca infomación sobre cómo se generan números aleatorios en C++. Explica con tus palabras cómo funciona y reescribe la generación de las listas utilizando la aleatoriedad.*/

/* Para generar numeros aleatorios se utiliza la funcion rand(), que esta definida en la libreria "cstdlib", esta funcion devuelve un nuemro aleatorio entre y pueden
tambien definirse limites para dicho numero aleatorio entre el 0 y un rango maximo RAND_MAX, para conocer el valor del rango maximo se hace una llamada a la constante.
*/
int a;
int valor;

a = rand();
cout << a << endl;
cout << "RAND_MAX para este equipo tiene un valor de: " << RAND_MAX;


/*Para definir un límite superior, se utiliza la notación de módulo (%)*/

valor = rand() % 5; /*Dara un numero entre el 0 y el 4*/

/*Para definir el límite inicial utilizamos la notación de suma, indicando el número desde el cual se deben generar los números*/

valor = 5 + rand(); /*Dara un numero mayor o igual a 5*/

/*Cuando definimos un valor inicial y un valor final, el valor final “se recorre” la cantidad del valor inicial, es decir, el valor final real es la suma del valor inicial más el valor final.*/
/*Por lo que para definir un limite fijo, al valor final se le tiene que restar el valor inicial*/

valor = 5 + rand() % (25-5); /*Esto dara un numero entre el 5 y el 24*/


return 0;

}
