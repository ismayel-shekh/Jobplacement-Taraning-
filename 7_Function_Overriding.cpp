#include<bits/stdc++.h>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal han;
    han.speak(); 

    Dog dog;
    dog.speak();  

    Cat cow;
    cow.speak();  

    return 0;
}