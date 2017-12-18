#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(string marque, int prix, int anneeFabrication)
    : m_marque(marque), m_prix(prix), m_anneeFabrication(anneeFabrication)
{
}

Vehicule::~Vehicule()
{
}

void Vehicule::affiche() const
{
    cout << endl << "Vehicule : " << m_marque << endl;
    cout << "Prix : " << m_prix << " euros" << endl;
}

void Vehicule::afficherAnneeFabrication() const
{
    cout << "Annee fabrication : " << m_anneeFabrication << endl;
}
