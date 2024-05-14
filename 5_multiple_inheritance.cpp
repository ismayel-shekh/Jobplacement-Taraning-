#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    string name;
    int engine;
    Vehicle(string name, int engine){
        this->name = name;
        this->engine = engine;
    }
    void topGear(int gear) {
        cout << "Vehicle top gear: " << gear << endl;
    }
};
class Car{
    public:
    string model;
    Car(string model){
        this->model = model;
    }
    void modelMyCar() {
        cout << "My car model name: " << model << endl;
    }
};

class privatecar: public Vehicle, public Car{
    public:
    privatecar(string name, int engine, string model): 
    Vehicle(name, engine), Car(model){}
};

int main(){
    privatecar Bmw("banga gari", 5, "Ac13");
    Bmw.modelMyCar();
    Bmw.topGear(20);

}