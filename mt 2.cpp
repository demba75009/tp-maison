#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class MT
{
public: string nom;
float poids;
MT(){cout <<"class MoyenTransport\n";}

void affiche()
{
cout<<"nom :  "<<nom<<endl;
cout<<"poids : "<<poids<<endl;
}

~MT(){cout<<"destruction de l'objet de typer MT\n";}

};

class MTT :  public MT{
public :
 int nbroues;
MTT(){cout <<"class MTterrestre\n";}
void affiche()
{
cout<<"nombre de roues :"<<nbroues<<endl;
}
~MTT(){cout<<"destruction de l'objet de typer MTT\n";}

};

class MTTmoteur : public MTT{
public : float PuissanceMoteur;
float capacitereservoir;

float niveaures;

MTTmoteur(){cout <<"class MTTmoteur\n";}
void affiche()
{
cout<< "puissance du moteur" << PuissanceMoteur<<endl;
cout<< "capaciter du reservoir" << capacitereservoir<<endl;
cout<< "niveau du reservoire :" << niveaures<<endl;
}
~MTTmoteur(){cout<<"destruction de l'objet de typer MT\n";}

};


class voiture : public MTTmoteur{
public :
string marque;
string immat;
voiture(){cout <<"class voiture\n";}

void affiche(){
cout <<"immat :"<<immat<<endl;
cout <<"marque :"<<marque<<endl;

}
~voiture(){cout<<"destruction objet de type voiture\n";}

};



int main()
{

MT MT1;
MT1.nom= "voiture";
MT1.poids=2;
MT1.affiche();

MTT MT11;
MT11.nbroues=4;
MT11.affiche();

MTTmoteur MTTmoteur1;
MTTmoteur1.PuissanceMoteur=200;
MTTmoteur1.capacitereservoir=100;
MTTmoteur1.niveaures=0;
MTTmoteur1.affiche();   

voiture voiture1;
voiture1.immat="AA-123-AA";
voiture1.marque="DC";
voiture1.affiche();


MT*ptrMT= new voiture();
ptrMT -> affiche();
delete ptrMT;


return 0;
}

