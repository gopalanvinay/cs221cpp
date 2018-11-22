#include <iostream>

using namespace std;

int num, base;

int log(int num, int base){

    int result = 0;
    int temp = base;

    while (temp <= num){
        result += 1;
        temp *= base;
    }
    return result;
}

int main(){

    int result;

    cout << "Enter num and base: " << endl;
    cin >> num >> base;

    if(num <= 0 || base <= 1){
        cout << "Both inputs must be non-negative";                     //As Log(0) not defined and base 1 leads to infinite loop 
        return 0;
    }

    result = log(num, base);
    cout << "The log of " << num << " with base " << base << " is: " << result << endl; 
    return 0;
}