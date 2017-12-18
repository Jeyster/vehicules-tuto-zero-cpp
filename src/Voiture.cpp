#include "Voiture.h"

using namespace std;

Voiture::Voiture(string marque, int prix, int portes, int anneeFabrication) : Vehicule(marque, prix, anneeFabrication), m_portes(portes)
{
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

int Voiture::nbrRoues() const
{
    return 4;
}
