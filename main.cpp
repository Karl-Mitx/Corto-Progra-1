#include <iostream>
#include <string>
using namespace std;

int main() {
    //Inicio de los ejercicios
    //Juego de adivinanzas de un numero

    cout <<"Adivine el numero del 1 al 100";
    cout <<endl;

    int randomNumber;
    int a;
    cin >> a;
    randomNumber = (rand() % (100-1) + 1);
    cout << "El numero que usted tenia que adivinar era: " << randomNumber;
    cout << endl;




 return 0;
}