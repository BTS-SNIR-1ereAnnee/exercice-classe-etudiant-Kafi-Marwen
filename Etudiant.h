//Marwen KAFI
#include <string>
using namespace std;

#ifndef ETUDIANT_H
#define ETUDIANT_H

class Etudiant
{

public: 
    Etudiant();
    Etudiant (/*paramètres*/)   
    
    float calculMoyenne();
    void setEtudiant();
    string getEtudiant() const;
    int getNote10() const;
    void setNote10();
    int getNote20() const;
    void setNote20();
private:
    string Etudiant;
    int note20;
    int note10;
};
#endif
