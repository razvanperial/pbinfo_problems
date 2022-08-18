#include <bits/stdc++.h>
using namespace std;
ifstream fin("parsare.in");
ofstream fout("parsare.out");
int maxi = INT_MIN, n = 0;
char c;

class Car {
    string brand;
    public:
        string color;

        string getBrand() {
            return brand;
        }

        Car() {
            brand = "unknown";
        };

        Car(string carBrand) {
            if(carBrand != "bmw" && carBrand != "audi" && carBrand != "vw") {
                cout << "Wrong Type";
                brand = "unknown";
                return;
            }
            brand= carBrand;
        }
};

int main(){

    Car myCar;
    myCar.color = "red";
    Car yourCar("seat");

    cout << myCar.getBrand() << '\n';
    cout << yourCar.getBrand();

    while(fin.get(c)){
        if (c != ' ') {
            n = n*10 + (c-'0');
        } else {
            if (n > maxi)
                maxi = n;
            n = 0;
        }
    }
    fout << maxi;
}
