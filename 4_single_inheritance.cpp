#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    string name;
    int quentity;
    void eat(){
        cout <<name << " can eat " <<endl;

    }
    void drinking(int x , string y){
        cout << name << y <<endl;
    }
};
class bird: public Animal{
    public:
    bird(string name, int quentity){
        this->name = name;
        this->quentity = quentity;
    }
};
int main(){
    bird obj ("paroad", 20);
    obj.eat();
    obj.drinking(20, "king is back ");
    cout<< endl<<(obj.quentity);
}