#include<iostream>

using namespace std;

void SumarDigitos(){
    int n, x = 0;
    cout <<"Dime el numero \n";\
    cin >> n;
    while (n > 0){
        x = x + n % 10;
        n = n / 10;
    }

    cout << "La suma de los digitos del numero es " << x << "\n";
}

int main(int argc, char const *argv[])
{
    SumarDigitos();
    return 0;
}
