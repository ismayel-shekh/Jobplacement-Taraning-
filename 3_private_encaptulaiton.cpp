#include<bits/stdc++.h>

using namespace std;

class A{
    int value;

    public:
    string name;
    int roll;
    A(string name, int roll){
        this->name = name;
        this->roll = roll;
        cout<<endl<<name<<endl;
    }   

    void setter(int v , string sender){
        cout<<"send BY  " <<  sender<<endl;
        value = v;
    }
    void nobra(){
        cout << value ;
    }
    void getter(){
        cout<<value<<endl;
    }

};
                
int main(){
    A obj("Asif", 10);
    // obj.value = 5;
    obj.setter(15, "Ismayel Vhi");
    obj.getter(); 
    cout<<obj.name<<endl; 
    cout<<"roll "<< obj.roll<<endl; 
            
              
    return 0;
}