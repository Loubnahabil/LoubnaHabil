#include<iostream>
using namespace std;

class mere {
public:
void display (){
    cout<<"Je suis le message de la classe mere"<<endl;
}
};
class fille {
public:
void display ()  {
cout<<"Je suis le message de la classe fille"<<endl;
}
};

main() {
    fille f;
    f.display();


}