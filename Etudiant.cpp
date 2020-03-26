//Marwen KAFI
#include "Etudiant.h"

Etudiant::Etudiant()
{
	m_nomEtudiant = "Sylvain";
	m_note1 = 20;
	m_note2 = 10;
}

Etudiant::Etudiant(string nom, int note1, int note2)
{
    m_nomEtudiant = nom;
	this->m_note1 = note1;
    this->m_note2 = note2;
}

string Etudiant::getNom() const
{
	return m_nomEtudiant;
}
void Etudiant::setNom(string nom)
{

}
int Etudiant::getNote1() const
{

	return m_note1;
}

void Etudiant::setNote1(int note1)
{

}

int Etudiant::getNote2() const
{

	return m_note2;
}
void Etudiant::setnote2(int note2)
{

}
float Etudiant::calculMoyenne()
{

	return 12.50;
} 
