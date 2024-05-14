#include<bits/stdc++.h>
using namespace std;
class Food {
public:
    void start(string name) {
        cout << "Food Name: " << name << endl;
    }
};

class Rice : public Food {
public:
    string name;
    Rice(string name) : Food() {
        this->name = name;
        start(name);
    }
};

class Mango : public Rice {
public:
    Mango(string name) : Rice(name) {
        cout << "habi tasty mango name is " << name << endl;
    }
};

int main() {
    Mango langra("langora");
    return 0;
}