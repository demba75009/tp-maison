#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class maison 
{
public:
string numeromaison;
int surface;
string adresse;

maison(){

cout <<"numeromaison"<<numeromaison<<endl;
cin>>numeromaison;
cout<<"surface"<<surface<<endl;
cin>>surface;
cout<<"adresse"<<adresse<<endl;
cin>>adresse;
};


maison(string b, int s, string a)
{
cout<<"Constucteur de la maison"<<endl;
b=numeromaison;
s=surface;
a=adresse;
}

void affiche()
{
cout<<"numero de la maison : "<<numeromaison<<endl;

cout<<"surface de la maison :"<<surface<<endl;

cout<<"adresse de la maison : "<<adresse<<endl;
}

int coincide (maison p,maison q)
{
	if ((p.numeromaison==q.numeromaison)&&(p.surface==q.surface)&&(p.adresse==q.adresse)) 
		return 1;	
	else return 0;
}


};


int main()
{

maison M1;
M1.numeromaison="douze";
M1.surface;
M1.adresse="rue momarte";
M1.affiche();

maison M2;
M2.numeromaison="quatre-vingt";
M2.surface;
M2.adresse="rue bergere";
M2.affiche();

cout << coincide(M1,M2) <<endl;

return 0;
}
          
/*************************************************************************************************

this = pointeur qui pointe l'adresse d'un objet.

static = attribut qui affiche nombre d'objet appliqué. Existe 1 seul fois .Il ne fait pas partie des constructeur.

*************************************************************************************************/ 
