#include<iostream>
using namespace std;

int main(){

    int ganjil, genap;
    ganjil = 1;
    genap = 2;

    cout << "Ini bilangan ganjil ";
    while (ganjil <= 35){
        cout << ganjil << " " ;
        ganjil += 2;
    }

    cout << "\nIni bilangan genap ";
    while (genap <= 34){
        cout << genap << " " ;
        genap += 2;
    }
    return 0;
}