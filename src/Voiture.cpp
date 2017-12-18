#include "Voiture.h"

using namespace std;

Voiture::Voiture(string marque, int prix, int portes) : Vehicule(marque, prix), m_portes(portes)
{
    //ctor
}

Voiture::~Voiture()
{
    //dtor
}

void Voiture::affiche() const
{
    cout << endl << "Voiture : " << m_marque << endl;
    cout << "Prix : " << m_prix << " euros" << endl;
    cout << "Portes : " << m_portes << endl;
}
