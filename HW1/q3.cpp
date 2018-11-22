#include <iostream>

using namespace std;

int base, exponent;

int pow(int base, int exponent){

    if(exponent == 1){
        return base;
    }
    else{
        return base * pow(base, exponent-1);
    }
}

int main(){

    int result;

    cout << "Enter base and exponent: " << endl;
    cin >> base >> exponent;

    if(base < 1 || exponent < 1){
        cout << "Both inputs must be positive" << endl;
        return 0;
    }

    else{
        result = pow(base, exponent);
    }

    cout << "The result is: " << result << endl;
    return 0;
}