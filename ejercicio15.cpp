#include<iostream>

using namespace std;

void TablaMultiplicar(){
    int num;
    cout << "Dime el numero del que qquieres saber la tabla \n";
    cin >> num;

    for(int i=1; i <=12; i++){
        cout << num << " * " << i << " = " << num*i << "\n";
    }
}

int main(int argc, char const *argv[])
{
    TablaMultiplicar();
    return 0;
}
