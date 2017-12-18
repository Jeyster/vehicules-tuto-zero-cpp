#include "Moto.h"

using namespace std;

Moto::Moto(string marque, int prix, double vitesse, int anneeFabrication) : Vehicule(marque, prix, anneeFabrication), m_vitesse(vitesse)
{
    //ctor
}

Moto::~Moto()
{
    //dtor
}

void Moto::affiche() const
{
    cout << endl << "Moto : " << m_marque << endl;
    cout << "Prix : " << m_prix << " euros" << endl;
    cout << "Vitesse : " << m_vitesse << " km/h" << endl;
}

int Moto::nbrRoues() const
{
    return 2;
}
