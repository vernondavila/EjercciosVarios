#include<iostream>
#include<string>

using namespace std;

void NumerosBinarios(){
    int num;
    string binario = " ";
    cout << "Dime un numero entero positivo \n";
    cin >> num;

    if(num > 0){
        while (num > 0){
            if (num % 2 == 0){
                binario = "0" + binario;
            }
            else{
                binario + "1" + binario;
            }
            num = (int)num / 2;
        }
    }
    else if (num == 0){
        binario = "0";
    }
    else{
        cout << "No se puede realizar la conversion, pruebe de nuevo con otro numero \n";
    }
    cout << "El resultado de la conversion es " << binario << "\n";
}

int main(int argc, char const *argv[])
{
    NumerosBinarios();
    return 0;
}
