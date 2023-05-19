#include<iostream>

using namespace std;

void PrimerosNumerosPrimos(){
    int i,j,primo;

    i=1;

    while(i<=100)
        primo=0;
        j=1;
        while(j<=i)
         if(i%j==0){
            primo=primo+1;
         }

         j=j+1;
        
        if(primo==2){
            cout<<i<<endl;

        }

        i=i+1;

}

int main(int argc, char const *argv[])
{
    PrimerosNumerosPrimos();
    return 0;
}
