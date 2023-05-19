#include<iostream>

using namespace std;

void SerieFibonacci(){
    int lim, aux = 1, fib = 0;
    cout << "Dime el limite hasta donde llegara la sucesion de Fibonaci " << endl;
    cin >> lim;

    if(lim > 0){
      for (int i = 1; i <= lim; i++){
        cout << "[" << fib << "]";
        aux += fib;
        fib = aux - fib;
      }
    }
    else{
        cout << "el numero debe ser mayor a cer!!" << endl;
    }
}
 int main(int argc, char const *argv[])
 {
    SerieFibonacci();
    return 0;
 }
 