#include<iostream>

using namespace std;

void numeroPerfecto(){
    int num;
    int div = 0;

    cout << "Dime un numero para determinar si es perfecto o no \n";
    cin >> num;

    for(int i = 1; i < num; i++){
        if(num % i == 0)
        div += i;
    }
    if(num == div){
        cout << "El numero es perfecto \n";
    }
    else{
        cout << "El numero no es perfecto \n";
    }
}

int main(int argc, char const *argv[])
{
    numeroPerfecto();
    return 0;
}
