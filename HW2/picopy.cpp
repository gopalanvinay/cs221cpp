#include <iostream>
#include <cmath>

using namespace std;

unsigned int npoints;                                               //Declaration of npoints


constexpr double gridpi(unsigned npoints){                                    //Function to estimate PI

    float hypotenuse = 0;
    int count = 0;

    for(unsigned int i=0; i<npoints; i++){
        for(unsigned int j=0; j<npoints; j++){
            hypotenuse = std::hypot(float(i), float(j));            //Distance from origin is the hypotenuse
            if(hypotenuse <= npoints){                              //Point contained within circle
                count++;
            }
        }
    }

    return (count/pow(npoints,2))*4;
}



int main(){

    double piResult;

    cout << "Enter npoints: " << endl;
    cin >> npoints;

    piResult = gridpi(npoints);

    cout << "The estimated value of Pi is: " << piResult << endl;   //Estimate printed

    return 0;


}