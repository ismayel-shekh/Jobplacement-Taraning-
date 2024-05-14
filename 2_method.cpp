#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int value;
    A(int value){
        this->value = value;
        printf("%d", value);
        cout << "constructor Called" << endl;

    }

    void display(){
        cout<< "Hello\n";
    }
    int tamp(int v);
};
int A::tamp(int v){
    return v+20;
}

int main(){
    A obj(8);
    cout<<endl<<obj.tamp(30)<<endl;
    obj.display();
}