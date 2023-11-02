#include<iostream>
using namespace std;

int main(){

    int n = 0;
    int fn;
    int fn1 = 1;
    int fn2 = 0;


    fn = fn1 + fn2;
    cout << fn << endl;
    
    while(n <= 9){

        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;

        cout << fn << endl;
        n++;
    }



    return 0;
}