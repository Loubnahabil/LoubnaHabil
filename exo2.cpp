#include<iostream>
using namespace std;

class shape{
    public:
    float L,H;
    shape(){
        L=10;
        H=5;
    }
};
class triangle : public shape {
public:
area (){
    cout<<"l'aire du triangle est "<<((L*H)/2)<<endl;
}
};
class rectangle : public shape{
    public:
    area(){
        cout<<"l'aire du rectangle est:"<<((L*H))<<endl;
    }
};

main(){
    triangle t;
    rectangle r;
    t.area();
    r.area();
}
