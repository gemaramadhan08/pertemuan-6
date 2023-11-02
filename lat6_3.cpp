#include<iostream>
using namespace std;

int main(){

    int no, bagi, sisa = 0;
    char pilih;

    do
    {
        cout << "Masukkan suatu bilangan: "; cin >> no;
        cout << "Masukkan bilangan pembagi[2,3,4,5]: "; cin >> bagi;
        cout << "Bilangan yang dipilih: " << no << endl;
        cout << "Bilangan pembagi: " << bagi << endl;

        sisa = no % bagi;

        if(sisa == 0){
            cout << "Tidak ada sisa bagi" << endl;
        }else{
            cout << "Sisa bagi : " << sisa << endl;
        }
        
        cout << "Apakah anda ingin meneruskan?(y/n): "; cin >> pilih;
    }

    while (pilih == 'y');
}