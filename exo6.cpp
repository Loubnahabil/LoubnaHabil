#include<iostream>
using namespace std;

class Personne{
    private:
    string nom,prenom;
    int jour,mois,annee;
    public:
    Personne(string n,string p,int j,int m,int a){
      nom=n;
      prenom=p;
      jour=j;
      mois=m;
      annee=a;     
     }
    void Afficher(){
        cout<<"nom:"<<nom<<endl<<"prenom:"<<prenom<<endl<<"date de naissance:"<<jour<<"/"<<mois<<"/"<<annee<<endl;
    }
};

class Employe : public Personne{
    private:
    float salaire;
    Employe(string n,string p,int j,int m,int a,float s){
    nom=n;
    prenom=p;
    jour=j;
    mois=m;
    annee=a; 
    salaire=s;
    }
    void Afficher(){
    cout<<"nom:"<<nom<<endl<<"prenom:"<<prenom<<endl<<"date de naissance:"<<jour<<"/"<<mois<<"/"<<annee<<endl<<"son salaire:"<<salaire<<endl;
    }
};

class Chef : public Employe{
    private:
    string service;
    Chef(string n,string p,int j,int m,int a,float s, string se):{
        nom=n;
      prenom=p;
      jour=j;
      mois=m;
      annee=a; 
      salaire=s;
      service=se;
    }
    void Afficher(){
        cout<<"nom:"<<nom<<endl<<"prenom:"<<prenom<<endl<<"date de naissance:"<<jour<<"/"<<mois<<"/"<<annee<<endl<<"son salaire:"<<salaire<<endl<<"son service:"<<service<<endl;    
    }
};

class Directeur : public Chef {
    private:
     string societe ;
     Directeur(string n,string p,int j,int m,int a,float s, string se, string so){
    nom=n;
      prenom=p;
      jour=j;
      mois=m;
      annee=a; 
      salaire=s;
      service=se;
      societe=so;
     }
     void Afficher(){
    cout<<"nom:"<<nom<<endl<<"prenom:"<<prenom<<endl<<"date de naissance:"<<jour<<"/"<<mois<<"/"<<annee<<endl<<"son salaire:"<<salaire<<endl<<"son service:"<<service<<endl<<"sa societe est:"<<societe<<endl;    
    }
};


