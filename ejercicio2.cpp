#include<iostream>

using namespace std;

void Numeros(){
    int num;
    cout << "Dime un numero" << endl;
    cin >> num;
    if (num < 0){
        cout << "El numero es negativo" << endl;
    }
    else{
        cout << "El numero es positivo" << endl;
    }
}

int main(int argc, char const *argv[])
{
    Numeros();
    return 0;
}
