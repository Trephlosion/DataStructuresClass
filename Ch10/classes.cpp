#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 class carType {
    private:
    string make, model, color;
    double maxspeed, price;

    public:
    carType();
    carType(string, string, string, double, double);
    string retrieveColor();

}

carType::carType(){}

carType::carType(string m, string mdl, string co, double spd, double p){

    make= m;
    model = mdl;
    color= co;
    maxspeed=spd;
    price = p;
}

string carType::retrieveColor(){
    return color;
}