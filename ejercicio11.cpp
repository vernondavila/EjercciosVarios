#include<iostream>

using namespace std;

void plaindromo(){
    int i=0,j=0;
    string palabra=" ";
    cout<<"ingrese palabra \n";
    cin >> palabra;
    for(i=0;i<palabra.length();i++){
        for(j=palabra.length()-1;j>=0;j--){
            if(palabra[i]==palabra[j]){
                cout<<"es palindroma \n";
            }
            else{
                cout<<"no lo es \n";
            }
        }
    }


}

int main(int argc, char const *argv[])
{
    plaindromo();
    return 0;
}
