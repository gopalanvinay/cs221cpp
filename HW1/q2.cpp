#include <iostream>

using namespace std;

int num, temp, count = 0;
bool result;

bool isMultiple(int x, int y){

    if(x%y == 0){
        return true;
    }

    else{
        return false;
    }

}

int main(){

    cout << "Enter num to test multiples: " << endl;
    cin >> num;


    for(int i=0; i<10; i++){
        cout << "Enter dividend: " << endl;
        cin >> temp;

        result = isMultiple(temp, num);
        if(result){
            count += 1;
        }
    }

    cout << "The number of multiples is: " << count << endl;

    return 0;
}