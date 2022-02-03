#include <iostream>
using namespace std;

int potencia(int num, int pot)
{
    int resultado = num;
    while (pot > 1)
    {
        resultado = resultado * num;
        pot--;
    }
    return resultado;
}

int main(){
  int n, suma, i,x;

  cout << "Ingrese un numero: ";
  cin >> n;

  suma=0;
  for(i=1;i<=n;i++){
    x=potencia(i,2);
    suma=suma+x;
  }
  cout << "La sumatoria es: " << suma << endl;

cout << "" << endl;

/*------------------------------------------------------*/

for (int i = 100; i >= 0; i--){
    cout << i << endl;
}

return 0;
}
