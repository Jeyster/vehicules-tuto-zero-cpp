#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(string marque, int prix) : m_marque(marque), m_prix(prix)
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
