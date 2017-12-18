#include "Camion.h"

using namespace std;

Camion::Camion(string marque, int prix, double poids, int anneeFabrication)
    : Vehicule(marque, prix, anneeFabrication), m_poids(poids)
{
    //ctor
}

Camion::~Camion()
{
    //dtor
}

void Camion::affiche() const
{
    cout << endl << "Camion : " << m_marque << endl;
    cout << "Prix : " << m_prix << " euros" << endl;
    cout << "Poids : " << m_poids << " tonnes" << endl;
}

int Camion::nbrRoues() const
{
    return 8;
}
