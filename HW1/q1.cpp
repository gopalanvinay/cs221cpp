#include <iostream>

using namespace std;

int x, y, z;


int main(){
    
    cout << "Enter x, y and z: " << endl;
    cin >> x >> y >> z ;


    if(x >= y){
        if(y >= z){
            cout << z << endl;
        }

        else {
            cout << y << endl;
        }
    }

    else {
        if (x <= z){
            cout << x << endl;
        }

        else{
            cout << z << endl;
        }
    }

    return 0;
}
