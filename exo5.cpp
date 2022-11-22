#include<iostream>
using namespace std;

class Animal {
    protected:
    string nom;
    int age;
    public:
    void set_value(string n, int a){
        nom=n;
        age=a;

    }
};

class Zebra: public Animal{
    public:
    void message1(){
        cout<<"le nom du zebra est "<<nom<<", son age est "<<age<<" , son lieu d'origine est l'amerique"<<endl;
    }
};

class Dolphin: public Animal{
    public:
    void message2(){
        cout<<"le nom du dolphin est "<<nom<<", son age est "<<age<<" , son lieu d'origine est l'amerique"<<endl;

    }
};

main (){
    Zebra z;
    Dolphin d;
    z.set_value("zebre1",15);
    d.set_value("dolphin1",50);
    z.message1();
    d.message2();

};