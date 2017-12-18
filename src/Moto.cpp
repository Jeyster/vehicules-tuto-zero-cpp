#include "Moto.h"

using namespace std;

Moto::Moto(string marque, int prix, double vitesse) : Vehicule(marque, prix), m_vitesse(vitesse)
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
