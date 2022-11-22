#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
    private:
    float x,y,z;
    public: 
    vecteur3d(float a = 0, float b = 0, float c = 0) {
        x=a;
        y=b;
        z=c;
    }
    vecteur3d(const vecteur3d &v) {
        x = v.x;
        y = v.y;
        z = v.z;        
    }
    
    void afficher() {
        cout << "("<<x<<","<<y<<","<<z<<")" << endl;
    }
    
    vecteur3d somme(const vecteur3d &v) {
         return vecteur3d(x+v.x, y+v.y, z+v.z);
         
    }
    
    float produit(const vecteur3d &v) {
        return x*v.x + y*v.y + z*v.z;
    }
    
    bool coincid(const vecteur3d &v) {
        return (x == v.x && y == v.y && z == v.z);
    }
    
    float norme() {
        return sqrt(x*x + y*y + z*z);
    }
    
    vecteur3d normax(vecteur3d v) {
        if( this->norme() > v.norme())
            return *this;
        return v;
    }
    //par adresse
    vecteur3d *normax(vecteur3d *v) {
        if( this->norme() > v->norme())
            return this;
            return v;
    }
    
    //par reference
    vecteur3d &normaxr(vecteur3d &v) {
        if( this->norme() > v.norme())
            return *this;
            return v;
    }
};