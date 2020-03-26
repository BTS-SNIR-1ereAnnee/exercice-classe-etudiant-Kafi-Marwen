//Marwen KAFI
#include "Etudiant.h"
#include <iostream>
using namespace std;

int main()
{
    Etudiant a;
	//cout << a.getNom()<<endl;
	
	string nom;
	int noteN1 , noteN2;
	
	cout<<"Saisissez le nom de l'élève :"<<endl;
	cin >> nom;
	
	cout<<"Saisissez la note sur 10 :"<<endl;
	cin >> noteN1;
	
	cout<<"Saisissez la note sur 20 :"<<endl;
	cin >> noteN2;
	
	cout <<a.getNom() << endl << a.getNote2() << endl <<a. getNote1() <<endl;
	
	return 0;
} 
