//Marwen KAFI
#include <string>
#include <string>
using namespace std;

#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant
{

public:
     //CONSTRUCTEURS
    //Constructeur par défaut
    Etudiant();
    //Constructeur paramétrés
    Etudiant(string nomEtudiant, int note1, int notes10);

    /*Méthodes*/
    float calculMoyenne();
    
    string getNom() const;
    
    void setNom(string nom);
    
    int getNote2() const;
    
    void setnote2(int note2);
 
    int getNote1() const;
    
    void setNote1(int note1);
private:
    string m_nomEtudiant;
    int m_note1;
    int m_note2;
};

#endif // ETUDIANT_H
